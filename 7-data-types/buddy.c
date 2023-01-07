//
// Created by Estrella on 2022/11/26.
//
#include <stdio.h>

#define N 400050

int n, q, process_tot, siz[N], id[N] = {0};

int fit_size(int m) {
  if (m == 1) {
    return 0;
  } else {
    for (int i = 0; i < n; ++i) {
      if (m > (1 << i) && m <= (1 << (i + 1))) {
        return i + 1;
      }
    }
  }
}

void que() {
  printf("%d\n", process_tot);
  for (int i = 1; i <= process_tot; ++i) {
    printf("%d ", id[i]);
  }
  printf("\n");
}

int find_free(int s) {
  //find the exact point
  for (int i = s; i <= n; ++i) {
    for (int j = 1; j <= process_tot; ++j) {
      if (siz[j] == i && id[j] == 0) {
        return j;
      }
    }
  }
}

void allocate(int id1, int s) {
  while (1) {
    int pos = find_free(s);
    if (siz[pos] == s) {
      id[pos] = id1;
      return;
    } else {
      //division
      //pos is the index of the divided point
      process_tot++;
      for (int i = process_tot - 1; i > pos; --i) {
        id[i + 1] = id[i];
        siz[i + 1] = siz[i];
      }
      siz[pos + 1] = siz[pos] - 1;
      siz[pos] = siz[pos] - 1;
      id[pos + 1] = 0;
    }
  }
}

int main() {
  scanf("%d%d", &n, &q);
  getchar();
  process_tot = 1;
  siz[1] = n;
  id[1] = 0;
  for (int i = 1; i <= q; ++i) {
    char f = 0;
    scanf("%c", &f);
    if (f == 'Q') {
      que();
    } else if (f == 'A') {
      int id1, m;
      scanf("%d%d", &id1, &m);
      allocate(id1, fit_size(m));
    }
    getchar();
  }

  return 0;
}