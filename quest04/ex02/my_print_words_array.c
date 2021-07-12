#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct s_string_array
{
    int size;
    char** array;
} string_array;

#endif

void my_putstr(char* param_1)
{
    while(*param_1 != '\0') {
        putchar(*param_1);
        param_1++;
    }
}

void my_print_words_array(string_array* param_1)
{
    for (int i = 0; i < param_1->size; i++){
        my_putstr(*(param_1->array));
        param_1->array++;
        putchar('\n');
    }
   
}