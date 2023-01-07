#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct File{
  char name[20];
  char parent[20];
  struct File **child;
  int num_child;
  int count;
}File;

File *root;

File *find_file(File *f,char*name){
    if(strcmp(f->name,name)==0){
        return f;
    }

    for (int i = 0; i <f->num_child ; i++) {
        File *child= find_file(f->child[i],name);
        if(child!=NULL){
            return child;
        }
    }
    return NULL;
}

void remove_file(File*f){
    //remove the children files
    for (int i = 0; i < f->num_child; i++) {
        remove_file(f->child[i]);
    }
    //remove itself
    free(f->child);
    free(f);
}

int count_file(File*f){
    int count=1;
    for (int i = 0; i <f->num_child ; i++) {
        count+= count_file(f->child[i]);
    }
    return count;
}


int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    //creat
    root= malloc(sizeof (File));
    strcpy(root->name,"~~~");
    root->num_child=0;
    root->count=1;
    root->child=NULL;

    //creat binary tree
    for (int i = 0; i <n ; i++) {
        char name[20],parent[20];
        scanf("%s %s",name,parent);
        File *f= malloc(sizeof (File));
        strcpy(f->name,name);
        strcpy(f->parent,parent);
        f->num_child=0;
        f->count=1;
        f->child=NULL;
        if(strcmp(parent,"~~~")==0){
            //this file is root's child
            root->child = realloc(root->child, sizeof(File*) * (root->num_child + 1));
            root->child[root->num_child]=f;
            root->num_child++;
        }else{
            File *parent_file= find_file(root,parent);
            parent_file->child = realloc(parent_file->child, sizeof(File*) * (parent_file->num_child + 1));
            parent_file->child[parent_file->num_child]=f;
            parent_file->num_child++;
        }
    }

    //process the commands

    for (int i = 0; i <q ; i++) {
        char command[20],name2[20];
        scanf("%s %s",command,name2);
        if(strcmp(command,"remove")==0){
            //printf("1");
            File *f= find_file(root,name2);
            if (f == NULL) {
                printf("not found\n");
            } else {
                File *parent_file = find_file(root, f->parent);
                for (int j = 0; j < parent_file->num_child; j++) {
                    if (parent_file->child[j] == f) {
                        for (int k = j + 1; k < parent_file->num_child; k++) {
                            parent_file->child[k - 1] = parent_file->child[k];
                        }
                        parent_file->num_child--;
                        break;
                    }
                }
                remove_file(f);
            }
        }else if(strcmp(command,"query")==0){
            //printf("0");
            File *f= find_file(root,name2);
            if (f == NULL) {
                printf("not found\n");
            } else {
                printf("%d\n", count_file(f));
            }
        }else{
            printf("error");
        }
    }
    return 0;
}