#include <stdarg.h>
#include <stdio.h>
#include <string.h>
void advanced_pretty_printer(const char flag, const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    if (n == 0) {
        printf("\n");
        return;
    }

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        if (flag == 'i') {
            printf("%d", va_arg(args, int));
        }
        else if (flag == 's') {
            str = va_arg(args, char *);
            printf("%s", (str != NULL) ? str : "(nil)");
        }

        
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    va_end(args);
    printf("\n");
}
int main()
{ advanced_pretty_printer('i',",",4,10,20,30,40);
  advanced_pretty_printer('s',"|",3,"hello","world","!");
  advanced_pretty_printer('s',"-",4,"c",NULL,"is","awesome");
  advanced_pretty_printer('i',",",0);
return(0);
}
