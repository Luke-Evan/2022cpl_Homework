//
// Created by Estrella on 2022/12/10.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Player {
    char pname[21];
    int atk_score;
    int dfd_score;
    int og_score;
} Player;
typedef struct Team {
    char tname[21];
    Player p[11];
    double e_atk;
    double e_dfd;
    double e_og;
} Team;
int n;
Team team[1001];
int cmp1(const void *a,const void *b){
    return ((Team *)a)->e_atk > ((Team *)b)->e_atk ? -1 :1;
}
int cmp2(const void *a,const void *b){
    return ((Team *)a)->e_dfd > ((Team *)b)->e_dfd ? -1 :1;
}
int cmp3(const void *a,const void *b){
    return ((Team *)a)->e_og > ((Team *)b)->e_og ? -1 :1;
}

int main() {

    scanf("%d", &n);

    //input
    for (int i = 0; i < n; ++i) {
        scanf("%s",team[i].tname);
        for (int j = 0; j < 11; ++j) {
            scanf("%s %d %d %d",team[i].p[j].pname,&team[i].p[j].atk_score,&team[i].p[j].dfd_score,&team[i].p[j].og_score);
        }
    }
    //calculate the average score
    for (int i = 0; i < n; ++i) {
        int tep1=0;
        int tep2=0;
        int tep3=0;
        for (int j = 0; j < 11; ++j) {
            tep1=tep1+team[i].p[j].atk_score;
            tep2=tep2+team[i].p[j].dfd_score;
            tep3=tep3+team[i].p[j].og_score;
        }
        team[i].e_atk=tep1/11.0;
        team[i].e_dfd=tep2/11.0;
        team[i].e_og=tep3/11.0;
    }

    //sort with atk
    qsort(team,n, sizeof(team[0]),cmp1);
    for (int i = 0; i < n; ++i) {
        printf("%s ",team[i].tname);
    }
    printf("\n");

    //sort with dfd
    qsort(team,n, sizeof(Team),cmp2);
    for (int i = 0; i < n; ++i) {
        printf("%s ",team[i].tname);
    }
    printf("\n");

    //sort with og
    qsort(team,n, sizeof(Team),cmp3);
    for (int i = 0; i < n; ++i) {
        printf("%s ",team[i].tname);
    }
    printf("\n");

    return 0;
}