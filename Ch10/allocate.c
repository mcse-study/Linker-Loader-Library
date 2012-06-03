#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char  buffer[32] = {0};
  unsigned char *ptr        = NULL;

  printf ("length: ");
  scanf ("%s", buffer);

  ptr = (unsigned char*)malloc(atoi(buffer));
  if (NULL == ptr) {
    printf("allocate failed\n");
    exit (1);
  }

  ptr[0] = 'c';
  ptr[atoi(buffer) - 1] = 'c';

  printf("ptr @ %p\n", ptr);
  sleep(100000);

  free (ptr);

  return 0;
}

