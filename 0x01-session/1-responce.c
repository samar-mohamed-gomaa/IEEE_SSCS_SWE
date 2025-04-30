#include<stdio.h>
int is_responce_detected(int strength)
  { if(strength>50)
     return 1;
    else
     return 0;
  }
int main()
{ int strength[3]={60,20,70};
  for(int i=0;i<3;i++)
   { if(is_responce_detected(strength[i]))
       printf("responce detected\n");
    else 
       printf("no responce\n");
   }
return 0;
}
