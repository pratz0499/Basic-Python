#include<stdio.h>
//int p,q;
int lsearch(int a[10][10],int);
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
