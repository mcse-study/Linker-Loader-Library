#include <stdio.h>

int __attribute((ms_hook_prologue)) sum(int a, int b) 
{
  return (a + b);
}

int main (void)
{
  int a = 0;
  int b = 0;
  int c = 0;
  int i = 10;

  printf ("a @ %p, b @ %p, c @ %p\n", &a, &b, &c);
  printf ("%d\n", (&c) - (&a));
  printf ("%d\n", (void *)(&c) - (void *)(&a));

  sum(a, b);

  return 0;
}

