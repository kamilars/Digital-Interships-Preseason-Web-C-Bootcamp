#include <stddef.h>
char* my_strrchr(char* param_1, char param_2)
{
    int i = 0;
    while (*param_1 != '\0') {
        param_1++;
        i++;
    }
    
    for (int j = i; j >= 0; j--){
        if (*param_1 == param_2)
            return param_1; 
        param_1--;
    }

    return NULL;
}