#include <stdio.h>
#include <ctype.h>
int my_isalpha(char param_1)
{
    if (isalpha(param_1)) return 1;
    else return 0;
   /* if (
        ((param_1 >= 65) && (param_1 <= 90)) || 
        ((param_1 >= 97) && (param_1 <= 122))\
    ) {return 1;}
    else return 0;*/
}