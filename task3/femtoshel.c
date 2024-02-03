#include <stdio.h>
#include <string.h>
#include <unistd.h>

char str_in[50] = { 0 };

char *exit_ = "exit";
char flag;
int
main ()
{
  printf ("start my femto shell\n");
  while (1)
    {
      printf (" femto shell ready> ");
      scanf ("%[^\n]%*c", str_in);
      char *rest = str_in;
      char *command = strtok_r (rest, " ", &rest);	/*strtok_r is built in function take string from input
							   string to it till " " and return pointer to the rest of the input string */
      flag = strcmp (exit_, command);
      if ((!flag))
	{
	  printf ("you are wilcome\n");
	  flag = 1;
	  break;
	}
      else
	{
	  if (!(strcmp ("echo", command)))
	    {
	      printf ("%s\n", rest);
	    }
	  else if (!(strcmp ("cd", command)))
	    {
	      int flag = chdir (rest);
	      if (flag == 0)
		{
		}
	      else if (flag < 0)
		{
		  printf ("cant change directory\n");
		}
	    }
	  else if (!(strcmp ("pwd", command)))
	    {
	      char path[30];
	      getcwd (path, 30);
	      printf ("%s\n", path);

	    }
	  else
	    {
	      printf ("enter correct command from echo , cd , pwd\n");
	    }
	}
    }
  return 0;
}
