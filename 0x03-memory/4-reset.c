#include<stdio.h>
static int global_counter=0;
void access_one()
{static int counter_one=0;
 counter_one++;
 global_counter++;
 printf("access_one is called %d times\n",counter_one);
}
void access_two()
{static int counter_two=0;
 counter_two++;
 global_counter++;
 printf("access_two is called %d times\n",counter_two);
} 
int main()
{access_one();
 access_two();
 access_one();
 access_two();
 access_one();
 printf("total accesses : %d\n",global_counter);
}
