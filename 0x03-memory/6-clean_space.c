#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *clear_allocation(size_t count, size_t size)
{size_t total_size = count * size;
 void *memory_block = malloc(total_size);
if(memory_block == NULL)
     return NULL;
memset(memory_block , 0, total_size);
return memory_block;
}
int main()
{ int *arr =(int *)clear_allocation(10,sizeof(int));
for (int i=0; i<10; i++)
   printf("%d", arr[i]);
free(arr);
return 0;
}
