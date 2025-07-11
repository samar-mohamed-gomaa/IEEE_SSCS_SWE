#include <stdio.h>
#include <stdlib.h>

int *summon_allies(int *allies, int n) {
    allies = (int *)malloc(n * sizeof(int));
    if (allies == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    printf("Enter %d integers for the allies:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &allies[i]);
    }

    return allies;
}
int main() {
    int n;
    printf("Enter the number of allies: ");
    scanf("%d", &n);

    int *allies = NULL;
    allies = summon_allies(allies, n);

    if (allies == NULL) {
        printf("Failed to summon allies.\n");
        return 1;
    }

    printf("Allies summoned successfully:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", allies[i]);
    }
    printf("\n");

    free(allies);
    return 0;
}
