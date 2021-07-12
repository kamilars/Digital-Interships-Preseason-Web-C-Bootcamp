#include <stdlib.h>
#include <stddef.h>
int* my_range(int param_1, int param_2)
{
  if (param_1 > param_2) {
    return NULL;
  }

  int *nums = (int*)malloc((param_2-param_1)*sizeof(int));
  int *initPoint = nums;
  
  for (int i = param_1; i < param_2; i++) {
      *nums = i;
      nums++;
  }
  return initPoint;
}