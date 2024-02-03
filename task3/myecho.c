#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define UINT_STATE 0
int
main (int ARGC, char *ARGV[])
{
  if (ARGC == 0)
    {
      return -1;
    }
  int count = 0;
  for (count =1;count<ARGC;count++ )
    {
      printf ("%s \t", ARGV[count]);
    }

  return 0;
}
