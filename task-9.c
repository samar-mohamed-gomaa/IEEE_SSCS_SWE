#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter to what table you need(only from 0 to 15)\n");
  scanf("%d",&n);
  if (n>=0 && n<=15)
  { 
    for(i=0 ; i<n+1 ; i++)
    {   for(j=0;j<10;j++)
        { printf("%d, ",i*j);}
    printf("\n");
    }
  }
 return 0;
} 
