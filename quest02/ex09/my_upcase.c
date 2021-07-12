#include <stdio.h>
#include <ctype.h>

char* my_upcase(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0') {
        if ((*param_1 >= 97) && (*param_1 <= 122))
            *param_1 = *param_1 - 32;
        param_1++;
        i++;
    }
    return param_1 - i;
}