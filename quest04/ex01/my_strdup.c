#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char* my_strdup(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0') {
        i++;
        param_1++;
    }
    param_1 = param_1 - i;

    char *copy = (char*)malloc(i*sizeof(char));

    for (int j = 0; j < i; j++) {
        *copy = *param_1;
        param_1++;
        copy++;
    }
    return copy - i;
}