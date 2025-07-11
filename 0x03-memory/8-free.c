#include <stdlib.h>

void free_array(int **arr) {
    if (arr == NULL) {
        return;
    }
    
    for (int i = 0; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    
    free(arr);
}
int main()
{ return 0;
}
