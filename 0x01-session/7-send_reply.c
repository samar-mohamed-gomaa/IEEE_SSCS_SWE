#include<stdio.h>
char *get_reply()
{ return "message received" ; }
int main()
{ char *reply = get_reply();
  printf("the message received is:\n  %s \n",reply);
  return 0;
}
