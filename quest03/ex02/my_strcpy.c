char* my_strcpy(char* param_1, char* param_2)
{
    while (*param_2 != '\0') {
        *param_1 = *param_2;
        param_2++;
        param_1++;
    }
    return param_1;
}