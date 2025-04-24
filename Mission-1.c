#include<stdio.h>
int main()
{  int num;
   printf("enter a number between 1 and 9\n");
   scanf("%d",&num);
   if(num>=1 && num<=9)
     printf("the equivalent character is %c \n" , num + '0');
   else 
     printf("invalid input");
   return 0;
}
