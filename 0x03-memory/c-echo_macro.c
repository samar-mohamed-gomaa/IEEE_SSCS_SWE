#include<stdio.h>
#define SQUARE(x) ((x) * (x))
int main()
{ int num =3;
printf("square of %d is: %d \n",num, SQUARE(num));
printf("square of (1 + 2): %d\n", SQUARE(1+2));
int a=2;
int b=3;
printf("square of (a+b): %d\n",SQUARE(a+b));
return 0;

}

