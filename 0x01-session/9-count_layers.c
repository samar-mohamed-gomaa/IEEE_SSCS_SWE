#include<stdio.h>
int sum_layers(int n)
{ if(n<=0)
    return 0;
  return n + sum_layers(n-1);}
int main()
{ printf("the sum for n=10 is %d \n",sum_layers(10));
  printf("the sum for n=20 is %d \n",sum_layers(20));
  printf("the sum for n=100 is %d \n",sum_layers(100));
  printf("the sum for n=120 is %d \n",sum_layers(120));
}
