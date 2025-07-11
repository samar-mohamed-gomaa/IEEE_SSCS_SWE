#include<stdio.h>
int manual_sizeof()
{ int arr[2];
  int * ptr1=&arr[0];
  int * ptr2=&arr[1];
 return (char*)ptr2-(char*)ptr1;
}
int main()
{int size= manual_sizeof();
printf("size of integer is %d \n",size);
 return 0;
}
