#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...)
{
    va_list args;      
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(args, n);  

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);  

    va_end(args);       

    return (sum);
}
int main(void)
{
    int sum;
    sum = sum_them_all(5, 10, 20, 30, 40, 50);
    printf("Sum 1: %d\n", sum);  
    sum = sum_them_all(3, 5, -10, 15);
    printf("Sum 2: %d\n", sum);  

    
    sum = sum_them_all(0);
    printf("Sum 3: %d\n", sum);  

    return (0);
}
