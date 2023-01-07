#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define HASH_SIZE 500001

//node in linked_list
typedef struct Node
{
  char *str;
  struct Node *next;
} Node;

//establish the hash table
Node *hash_table[HASH_SIZE];

//find the key
int hash(char *key) {
    int h = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        h += key[i];
    }
    return h % HASH_SIZE;
}

void add_string(char *str)
{
    int h = hash(str);
    Node *node = malloc(sizeof(Node));
    node->str= str;
    node->next = hash_table[h];
    hash_table[h] = node;
}

bool find_string(char *str)
{
    int h = hash(str);
    for (Node *p = hash_table[h]; p != NULL; p = p->next)
    {
        if (strcmp(p->str, str) == 0)
            return true;
    }
    return false;
}

int main()
{
    int m, q;
    scanf("%d%d", &m, &q);

    char str[1000];
    for (int i = 0; i < m; i++)
    {
        scanf("%s", str);
        add_string(str);
    }

    for (int i = 0; i < q; i++)
    {
        scanf("%s", str);
        if (find_string(str))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
