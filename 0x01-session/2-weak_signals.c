#include<stdio.h>
int is_strong_signal(int strength)
{
  return (strength > 50) ? 1 : 0 ;}
void check_signal(int strength)
 {  if(is_strong_signal(strength))
      printf("Strong signal detected\n");
    else
      printf("No signal detected\n");}
int main()
{ int signal[5]={20,60,80,30,50};
  for(int i=0;i<5;i++)
   check_signal(signal[i]); 
}
