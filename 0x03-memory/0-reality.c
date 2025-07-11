#include<stdio.h>
void status(int n)
{if(n>0)
  printf("positive\n");
 else if(n<0)
  printf("negative\n");
 else if(n==0)
  printf("zero\n");
}
int main()
{ void (*status_ptr)(int)=status;
  status_ptr(2);
  status_ptr(-7);
  status_ptr(0);
}
