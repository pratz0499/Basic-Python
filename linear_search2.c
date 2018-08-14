#include<stdio.h>

#define MAXM 10
#define MAXN 10
struct Two_D_array {
   int m,n;
   int a[MAXM][MAXN];
};

int lsearch(int m,int n,int a[m][n],int key);


struct Two_D_array inputarray()
{
     struct Two_D_array t;
     printf("Enter m");
     scanf("%d",&t.m);
     printf("Enter n");
     scanf("%d",&t.n);
     for( int i=0; i<t.m;i++) {
        for(int j=0; j<t.n;j++) {
           print...
           scanf ...
        }
     }
     return t;
}

int lsearch( struct Two_D_array t, int key) {
 
    return pos;
}


int main()
{
 struct Two_D_array t;
 t = inputarray();
 int key;
 /* write get key */
 int pos = lsearch(t,key);
 ...
}
 
 return 0;
}


void main()
{
 int a[10][10],i,j,n,m,key,position;
 printf("Enter the size of an array: ");
 scanf("%d%d",&n,&m);
 printf("Enter the elements of n:");
 for(i=0;i<n;i++)
 {

  for(j=0;j<m;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
 printf("Enter the key element:");
 scanf("%d",&key);

lsearch(a[n][m],key);
}

int lsearch(int a[p][q],int key)
{
int i,j;
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
     {
      if (a[i][j]==key)
      {
       printf("The element is found ");
      }
     else
       {
        printf("The element is not found");
       }
    }
 }
return 0;
}
