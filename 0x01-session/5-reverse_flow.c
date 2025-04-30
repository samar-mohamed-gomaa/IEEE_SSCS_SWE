#include<stdio.h>
void swap(int*a,int*b)
{ int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
int x=5, y=7;
printf("numbers before swaping %d %d \n",x,y);
swap(&x,&y);
printf("numbers after swaping %d %d \n",x,y);
return 0;
}
