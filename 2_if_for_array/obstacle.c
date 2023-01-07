//
// Created by Estrella on 2022/10/9.
//
#include<stdio.h>
int main(){
int xa,ya,xb,yb,xc,yc,i;
scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
if(ya==yb&&yb==yc){
    if(xa<xc&&xc<xb){
        printf("%d\n",xb-xa+2);
        for(i=0;i<(xc-xa-1);i++){
            printf("R");
        }
        printf("URRD");
        i=i+4;
        for(;i<(xb-xa+2);i++) {
            printf("R");
        }
    }
    if(xa<xb&&xb<xc){
        printf("%d\n",xb-xa);
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
    }
    if(xa>xb&&xb>xc) {
        printf("%d\n", xa - xb);
        for (i = 0; i < (xa - xb); i++) {
            printf("L");
        }
    }
    if(xa>xc&&xc>xb){
        printf("%d\n",xa-xb+2);
        for(i=0;i<(xa-xc-1);i++){
            printf("L");
        }
        printf("ULLD");
        i=i+4;
        for(;i<(xa-xb+2);i++) {
            printf("L");
        }
    }
    if(xa>xb&&xa<xc) {
        printf("%d\n", xa - xb);
        for (i = 0; i < (xa - xb); i++) {
            printf("L");
        }
    }
    if(xa<xb&&xa>xc){
        printf("%d\n",xb-xa);
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
    }
}
if(xa==xb&&xb==xc){
        if(ya<yc&&yc<yb){
            printf("%d\n",yb-ya+2);
            for(i=0;i<(yc-ya-1);i++){
                printf("U");
            }
            printf("RUUL");
            i=i+4;
            for(;i<(yb-ya+2);i++) {
                printf("U");
            }
        }
        if(ya<yb&&yb<yc){
            printf("%d\n",yb-ya);
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
        }
        if(ya>yb&&yb>yc) {
            printf("%d\n", ya - yb);
            for (i = 0; i < (ya - yb); i++) {
                printf("D");
            }
        }
        if(ya>yc&&yc>yb){
            printf("%d\n",ya-yb+2);
            for(i=0;i<(ya-yc-1);i++){
                printf("D");
            }
            printf("RDDL");
            i=i+4;
            for(;i<(ya-yb+2);i++) {
                printf("D");
            }
        }
    if(ya<yb&&ya>yc) {
        printf("%d\n", yb - ya);
        for (i = 0; i < (yb - ya); i++) {
            printf("U");
        }
    }
    if(ya>yb&&yc>ya) {
        printf("%d\n", ya - yb);
        for (i = 0; i < (ya - yb); i++) {
            printf("D");
        }
    }
    }
if(xb>xa&&yb>ya){
    if(xc>xb||yc>yb||xc<xa||yc<ya||(xc<xb&&xc>xa&&yc<yb&&yc>ya)){
        printf("%d\n",(xb-xa+yb-ya));
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
        for(i=0;i<(yb-ya);i++){
            printf("U");
        }
    }
    if(yc==ya&&xc>xa&&xc<=xb){
        printf("%d\n",(xb-xa+yb-ya));
        for(i=0;i<(yb-ya);i++){
            printf("U");
        }
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
    }
    if(yc==yb&&xc>=xa&&xc<xb){
        printf("%d\n",(xb-xa+yb-ya));
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
        for(i=0;i<(yb-ya);i++){
            printf("U");
        }
    }
    if(xc==xa&&yc>ya&&yc<yb){
        printf("%d\n",(xb-xa+yb-ya));
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
        for(i=0;i<(yb-ya);i++){
            printf("U");
        }
    }
    if(xc==xb&&yc<yb&&yc>ya){
        printf("%d\n",(xb-xa+yb-ya));
        for(i=0;i<(yb-ya);i++){
            printf("U");
        }
        for(i=0;i<(xb-xa);i++){
            printf("R");
        }
    }
}
if(xb>xa&&yb<ya){
        if(xc>xb||yc>ya||xc<xa||yc<yb||(xc<xb&&xc>xa&&yc<ya&&yc>yb)){
            printf("%d\n",(xb-xa+ya-yb));
            for(i=0;i<(xb-xa);i++){
                printf("R");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(yc==ya&&xc>xa&&xc<=xb){
            printf("%d\n",(xb-xa+ya-yb));
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
            for(i=0;i<(xb-xa);i++){
                printf("R");
            }
        }
        if(yc==yb&&xc<xb&&xc>=xa){
            printf("%d\n",(xb-xa+ya-yb));
            for(i=0;i<(xb-xa);i++){
                printf("R");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(xc==xa&&yc>yb&&yc<ya){
            printf("%d\n",(xb-xa+ya-yb));
            for(i=0;i<(xb-xa);i++){
                printf("R");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(xc==xb&&yc>yb&&yc<ya){
            printf("%d\n",(xb-xa+ya-yb));
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
            for(i=0;i<(xb-xa);i++){
                printf("R");
            }
        }
    }
if(xb<xa&&yb<ya){
        if(xc>xa||yc>ya||xc<xb||yc<yb||(xc>xb&&xc<xa&&yc<ya&&yc>yb)){
            printf("%d\n",(xa-xb+ya-yb));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(yc==ya&&xc<xa&&xc>=xb){
            printf("%d\n",(xa-xb+ya-yb));
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
        }
        if(yc==yb&&xc>xb&&xc<=xa){
            printf("%d\n",(xa-xb+ya-yb));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(xc==xa&&yc>yb&&yc<ya){
            printf("%d\n",(xa-xb+ya-yb));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
        }
        if(xc==xb&&yc>yb&&yc<ya){
            printf("%d\n",(xa-xb+ya-yb));
            for(i=0;i<(ya-yb);i++){
                printf("D");
            }
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
        }
    }
if(xb<xa&&yb>ya){
        if(xc>xa||yc>yb||xc<xb||yc<ya||(xc<xa&&xc>xb&&yc>ya&&yc<yb)){
            printf("%d\n",(xa-xb+yb-ya));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
        }
        if(yc==ya&&xc<xa&&xc>=xb){
            printf("%d\n",(xa-xb+yb-ya));
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
        }
        if(yc==yb&&xc>xb&&xc<=xa){
            printf("%d\n",(xa-xb+yb-ya));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
        }
        if(xc==xa&&yc<yb&&yc>ya){
            printf("%d\n",(xa-xb+yb-ya));
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
        }
        if(xc==xb&&yc<yb&&yc>ya){
            printf("%d\n",(xa-xb+yb-ya));
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
            for(i=0;i<(xa-xb);i++){
                printf("L");
            }
        }
    }
if(xa==xb&&xc!=xa){
    if(yb>ya){
        printf("%d\n",yb-ya);
            for(i=0;i<(yb-ya);i++){
                printf("U");
            }
    }
    if(yb<ya){
        printf("%d\n",ya-yb);
        for(i=0;i<(ya-yb);i++){
            printf("D");
        }
    }


}
if(ya==yb&&yc!=ya) {
    if (xb > xa) {
        printf("%d\n", xb - xa);
        for (i = 0; i < (xb - xa); i++) {
            printf("R");
        }
    }
    if (xb < xa) {
        printf("%d\n", xa - xb);
        for (i = 0; i < (xa - xb); i++) {
            printf("L");
        }
    }
}
return 0;
}