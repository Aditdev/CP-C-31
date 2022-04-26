// Logical opeartors in C
#include <stdio.h>

int main ()
{
  int a, b, c;
  printf ("Enter 3 Numbers");
  scanf ("%d%d%d", &a, &b, &c);

//   Logical Operators
  if (a >= b && a >= c)
    {
      printf ("Max is %d", a);
    }
  else if (b >= a && b >= c)
    {
      printf ("Max is %d", b);
    }
  else
    {
      printf ("Max is %d", c);
    }
  return 0;
}
