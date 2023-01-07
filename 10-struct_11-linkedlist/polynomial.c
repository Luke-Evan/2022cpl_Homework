#include<stdio.h>
#define MAX_DEGREE 20005

char name[11];

typedef struct {
  int degree;
  int coft[MAX_DEGREE];
} Poly;

void WritePoly(Poly p) {
    for (int j = p.degree; j > 1; j--) {
        if (p.coft[j] == 0) {
            continue;
        } else {
            if (p.coft[j] > 0 && j != p.degree)
                printf("+");
            if (p.coft[j] == -1) {
                printf("-");
            } else if (p.coft[j] != 1) {
                printf("%d", p.coft[j]);
            }
            printf("%s^%d", name, j);
        }
    }

    //1 for index
    if (p.coft[1] != 0) {
        if (p.coft[1] > 0) {
            printf("+");
        }
        if (p.coft[1] == -1) {
            printf("-");
        } else if (p.coft[1] != 1) {
            printf("%d", p.coft[1]);
        }
        printf("%s", name);
    }

    //const
    if (p.coft[0] != 0) {
        if (p.coft[0] > 0 && p.degree >= 0) { printf("+"); }
    printf("%d", p.coft[0]);
    }
}

Poly AddPoly(Poly p1, Poly p2) {
    Poly p;
    p.degree = (p1.degree > p2.degree ? p1.degree : p2.degree);
    for (int i = 0; i <= p.degree; i++) {
        p.coft[i] = p1.coft[i] + p2.coft[i];
    }
    return p;
}

Poly SubPoly(Poly p1, Poly p2) {
    Poly p;
    p.degree = (p1.degree > p2.degree ? p1.degree : p2.degree);
    for (int i = 0; i <= p.degree; i++) {
        p.coft[i] = p1.coft[i] - p2.coft[i];
    }
    return p;
}

Poly MultiPoly(Poly p1, Poly p2) {
    Poly p;
    p.degree = p1.degree + p2.degree;

    int i, j;
    for (i = 0; i <= p.degree; i++) { p.coft[i] = 0; }

    for (i = 0; i <= p1.degree; i++) {
        for (j = 0; j <= p2.degree; j++) {
            p.coft[i + j] += p1.coft[i] * p2.coft[j];
        }
    }
    return p;
}

int main() {
    Poly p1, p2;
    scanf("%d %d", &p1.degree, &p2.degree);
    scanf("%s", name);

    for (int i = p1.degree; i >= 0; i--) {
        scanf("%d", &p1.coft[i]);
    }
    for (int i = p2.degree; i >= 0; i--) {
        scanf("%d", &p2.coft[i]);
    }

    Poly sum = AddPoly(p1, p2);
    Poly diff = SubPoly(p1, p2);
    Poly product = MultiPoly(p1, p2);

    WritePoly(sum);
    printf("\n");
    WritePoly(diff);
    printf("\n");
    WritePoly(product);

    return 0;
}