#include <errno.h>
int femtoshell_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with femtoshell_main() as the main function of your program
    char *buf = (char *)calloc(256, sizeof(char));
	size_t szBuf = 256;

	while (1)
	{
		printf("Femto shell prompt>>>>>>>> " );
		
		   if (getline(&buf, &szBuf, stdin) == -1) { 
		        
		   		  break;
        }

		if (strcmp(buf, "\n") == 0)
		{
			continue;
		}
		else if (strcmp(buf, "exit\n") == 0)
		{
			printf("Good Bye\n");
			exit(0);
			break;
		}
		else if (strncmp(buf, "echo", 4) == 0)
		{
			char *echo = buf + 5;
			printf("%s", echo);
		}
		else
		{
			printf("Invalid command\n");
		    errno = ENOENT ;
		    
		}
		
	}
	   if(errno != 0)
		   exit(-1);
	
  return 0;
}
