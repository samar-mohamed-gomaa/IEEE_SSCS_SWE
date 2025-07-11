#include<stdio.h>
#include<stdlib.h>
int global=5;
int main()
{ int local=7;
  int  *dynamic=(int*)malloc(sizeof(int));
  *dynamic = 15;
  char * string="hello";
printf("%p : data segment -> %d \n",&global,global);
printf("%p :stack -> %d \n",&local,local);
printf("%p : heap -> %d \n",(void*)dynamic,*dynamic);
printf("%p :read-only data -> %s \n",(void*)string,string);
free(dynamic);
return 0;
}
