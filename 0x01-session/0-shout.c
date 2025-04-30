#include<stdio.h>
void repeat(int n)
 {for (int i=0;i<n;i++)
    printf("Hello world\n");
 }

int main()
{
  int n ;
  printf("enter number you want to repeat the  message");
  scanf("%d",&n);
  repeat(n);
}

