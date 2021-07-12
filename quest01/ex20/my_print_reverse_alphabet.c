#include <stdio.h>
void my_print_reverse_alphabet()
{
    for (int i = 122; i >= 97; i--){
        putchar(i);
    }
    putchar('\n');
}