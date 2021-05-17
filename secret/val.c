#include <stdio.h>
#include <stdlib.h>

int func(int *a)
{
  a[5] = 1;

  int b;
  if (b)
    printf("lol\n");
}

int main()
{
  int *a = malloc(sizeof(int) * 5);
  func(a);
  return 0;
}
