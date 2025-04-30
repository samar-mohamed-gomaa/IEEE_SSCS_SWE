#include<stdio.h>
void echo(int n)
{if(n>0)
 {printf("Echo.....\n");
  return echo(n-1); }
}
int main()
{ echo(5);
  return 0;
}
