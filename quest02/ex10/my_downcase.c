char* my_downcase(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0') {
        if ((*param_1 >= 65) && (*param_1 <= 90))
            *param_1 = *param_1 + 32;
        param_1++;
        i++;
    }
    return param_1 - i;
}