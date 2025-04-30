#include<stdio.h>
int signal=98;
int *ptr=&signal;
int main()
{printf("the address of signal is %p\n",ptr);
 printf("the value of signal is %d\n",*ptr);
 return 0;
}
