#include"_putchar.h"
int main()
{
  char c;
  for (int i=0 ; i<5 ; i++)
  {
     for (c='a' ; c<='z' ; c++)
        _putchar(c);
    _putchar('\n');
  }
  return 0;
}
