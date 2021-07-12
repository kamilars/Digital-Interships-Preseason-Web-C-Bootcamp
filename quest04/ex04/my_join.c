#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* param_1, char* param_2)
{
    size_t totalSize = 0;
    for (size_t i = 0; i < param_1->size; i++) {
        totalSize += strlen(param_1->array[i]);
    }

    totalSize += (param_1->size)*strlen(param_2) - strlen(param_2);
    char *join = (char*)malloc(totalSize * sizeof(char));

    int k = 0;

    for (int i = 0; i < param_1->size; i++) {
       strcpy(join, param_1->array[i]);
       join += strlen(param_1->array[i]);
       k += strlen(param_1->array[i]);
       if (param_2 != '\0') {
            strcpy(join, param_2);
            join += strlen(param_2);
            k += strlen(param_2);
       }
    }
    join -= strlen(param_2);
    *join = '\0';
    return join - k + strlen(param_2);

}