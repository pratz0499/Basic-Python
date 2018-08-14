#ifndef _LSEARCH_H
#define _LSEARCH_H

#define MAXM 10
#define MAXN 10
struct Two_D_array {
   int m,n;
   int a[MAXM][MAXN];
};
int lsearch(Two_D_array t, int key);
#endif
