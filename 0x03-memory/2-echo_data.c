#include <stdio.h>
#include <string.h>

typedef enum {
    INT,
    FLOAT,
    CHAR
} DataType;

typedef struct {
    DataType type;
    void *data;
} Data;

void echo_data(Data d)
{
    switch(d.type) {
        case INT:
            printf("%d\n", *(int *)d.data);
            break;
        case FLOAT:
            printf("%f\n", *(float *)d.data);
            break;
        case CHAR:
            printf("%c\n", *(char *)d.data);
            break;
        default:
            printf("Unknown data type\n");
    }
}
