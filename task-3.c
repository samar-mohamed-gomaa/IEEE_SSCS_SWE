#include<stdio.h>
int main()
{
 char c;
 printf("enter acharacter : ");
 scanf(" %c",&c);
 if (c>='a' && c<='z')
   printf("lowercase  letter \n");
 else if (c>='A' && c<='Z')
   printf("upercase  letter \n");
 else 
   printf("not a letter");
 return 0;
}
