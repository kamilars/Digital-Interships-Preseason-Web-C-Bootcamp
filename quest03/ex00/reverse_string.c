char* reverse_string(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0'){
        param_1++;
        i++;
    }
    param_1 = param_1 - i;
    char vals[i+1];

    for (int k = 0; k <= i; k++){
        vals[k] = *param_1;
        param_1++;
    }

    param_1 = param_1 - i;

    for (int j = i; j >=0; j--){
        *param_1 = vals[j];
        param_1++;
    }

    param_1 = param_1 - i;
    return param_1;
}