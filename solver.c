#include <stdio.h>
#include <stdlib.h>

int check(int *arr, int pos, int n);

int main()
{
  int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0};

  printf("%d\n", check(arr, 4, 3));

  return 0;
}

int check(int *arr,int pos, int n)
{
  int x, y;
  if (pos < 0 || 80 < pos) exit(1);

  x = pos % 9;
  y = pos / 9;

  int i, j;
  for (i = 0; i < 9; i++) {
    if (arr[y*9 + i] == n || arr[i*9 + x] == n) {
      return 0;
    }
  }

  int x_g, y_g;
  x_g = x / 3;
  y_g = y / 3;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (arr[(y_g + i)*9 + (x_g*3 + j)] == n) {
        return 0;
      }
    }
  }

  return 1;
}
