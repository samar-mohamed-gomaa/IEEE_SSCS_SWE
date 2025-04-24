#include "_putchar.h"
int main()
{ 
  char c;
  for(c='a' ; c<='z' ; c++)
    {
       if(c!='q')
          _putchar(c);
    }
  for(c='Z' ; c>='A' ; c--)
     {
        if(c!='Q')
           _putchar(c);
     }
 return 0;
}
