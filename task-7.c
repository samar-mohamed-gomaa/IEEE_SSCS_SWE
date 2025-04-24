#include<stdio.h>
#include"_putchar.h"
int main()
{  int i,j,k;
   for(i=0;i<8;i++) 
   {  for(j=i+1;j<9;j++)
      {  for(k=j+1;k<10;k++)
         {  _putchar(i+'0');
            _putchar(j+'0');
            _putchar(k+'0');
            if(!(i==7&&j==8&&k==9))
            { _putchar(','); 
            _putchar(' ');
            }         
         }
         
      }
   }
}

