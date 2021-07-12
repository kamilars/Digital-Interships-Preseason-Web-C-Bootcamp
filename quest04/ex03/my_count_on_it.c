#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct s_string_array
{
    int size;
    char** array;
} string_array;

#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY

typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;

#endif

int my_strlen(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0') {
        i++;
        param_1++;
    }
    return i;
}

integer_array* my_count_on_it(string_array* param_1)
{
    int i = param_1->size;
    integer_array *intCount = (integer_array*)malloc(sizeof (integer_array));
    intCount->array = calloc(i, sizeof *intCount->array);

    for (int j = 0; j < i; j++){
        intCount->array[j] = my_strlen(param_1->array[j]);
    }

    intCount->size = i;
    return intCount;
}