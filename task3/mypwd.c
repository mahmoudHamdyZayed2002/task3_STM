#include <stdio.h>
#include <unistd.h>

int
main ()
{
  char path[30] = { 0 };
  char *path2 = getcwd (path, 30);
  if (path == NULL)
    {
      printf ("not enough size\n");
    }
  else
    {
      printf ("%s\n", path);
    }
  return 0;
}
