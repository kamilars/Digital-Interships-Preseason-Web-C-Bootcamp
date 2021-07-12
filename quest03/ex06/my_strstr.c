#include <stddef.h>
char* my_strstr(char* param_1, char* param_2)
{
    if (*param_2 == '\0')
        return param_1;
    while (*param_1 != '\0') {
        if (*param_2 == *param_1) {
            int i = 0;
            while (*param_2 != '\0') {
                if (*param_2 != *param_1)
                    break;
                i++;
                param_1++;
                param_2++;
            }
            if (*param_2 == '\0') {
                return param_1 - i;
            }
            param_2 = param_2 - i;
            param_1 = param_1 - i;
            i = 0;
        }
        param_1++;
    }
    return NULL;
}