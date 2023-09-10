//
// Created by Estrella on 2022/11/16.
//
#include <stdio.h>

int vl[10000 + 50];
int ml[10000 + 50];

int main() {
    int n = 0;
    int L = 0;
    int whvl = 0;
    int p = 0;
    scanf("%d%d", &n, &L);
    getchar();
    for (int i = 0; i < n; ++i) {
        scanf("%d", &vl[i]);
    }
    getchar();
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ml[i]);
    }
    for (int i = 0; i < n; ++i) {
        int max = vl[0];
        for (int j = 0; j < n; ++j) {
            if (vl[j] > max) {
                max = vl[j];
            }
        }
        for (int j = 0; j < n; ++j) {
            if (vl[j] == max) {
                p = j;
                break;
            }
        }
        if (L - ml[p] >= 0) {
            whvl = whvl + vl[p] * ml[p];
            vl[p] = 0;
            L = L - ml[p];
        } else {
            whvl = whvl + vl[p] * L;
            break;
        }
    }
    printf("%d", whvl);
    return 0;
}