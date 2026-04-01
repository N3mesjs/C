#include <stdio.h>

int main() {
  int matrix[3][2] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };

  int (*p)[2] = matrix;
  return 0;
}