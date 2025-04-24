#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



int cp_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with cp_main() as the main function of your program.
  char buffer[20];
  int count ; 
  int  fd , fd_copy; 	
   

  if(argc < 3 ) {
     printf("syntax Erorr");
     exit(-1);
  }

  fd = open(argv[1], O_RDONLY);
	
  if (fd < 0)
	{
		printf("cant read the file ");
		exit(-1);
	}

  fd_copy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_copy == -1)
	{
		printf("cant write ");
		exit(-1);
	}

	while ((count = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_copy, buffer , sizeof(buffer)) < 0) {
		     printf("Erorr while writing");
    }

  }
    close(fd);
	close(fd_copy);
	return 0;
}
