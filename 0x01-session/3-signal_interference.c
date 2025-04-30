#include<stdio.h>
int signal_strength=0;
void boost_signal(int n)
{int signal_strength=100;
printf("booster:signal strength = %d\n",n);
}
int main()
{printf("global signal strength before calling : %d \n",signal_strength);
boost_signal(90);
printf("global signal strength after calling : %d \n",signal_strength);
return 0;
}
