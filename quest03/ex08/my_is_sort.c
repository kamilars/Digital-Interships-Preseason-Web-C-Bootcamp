#include <stdbool.h>
#include <stddef.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY

typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;

#endif


bool my_is_sort(integer_array* param_1)
{
    if (param_1->array == NULL) return true;
    if (param_1->array[0] < param_1->array[1]) {
        for (int i = 0; i < param_1->size-1; i++) {
            if (param_1->array[i] > param_1->array[i+1])
                return false;
        }
    }
    if (param_1->array[0] > param_1->array[1]) {
        for (int i = 0; i < param_1->size-1; i++) {
            if (param_1->array[i] < param_1->array[i+1])
                return false;
        }
    }  
    return true;  
}