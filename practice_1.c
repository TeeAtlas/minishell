// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// #include <sys/wait.h>

// //below was taken from geeksforgeeks and code vault tutorials

// int main(int ar, char **av)
// {
// 	//two pipes - first to send input string from parent
// 	// second to send concatenated string from child
// 	int fd1[2];
// 	int fd2[2];

// 	char fixed_str[] = "gofuckyourself.com";
// 	char input_str[100];
// 	pid_t p;

// 	if (pipe(fd1) == -1) 
// 	{
// 		fprintf(stderr, "pipe failed"); //standard input error
// 		return 1;
// 	}
// 	if (pipe(fd2) == -1) {
// 		fprintf(stderr, "pipe failed"); 
// 		return 1;
// 	}

// 	scanf("%s", input_str);
// 	p = fork();

// 	if (p < 0) {
// 		fprintf(stderr, "fork failed");
// 		return 1;
// 	}

// 	// parent process 
// 	else if (p > 0) {
// 		char concat_str[100];

// 		close(fd1[0]); // close reading end of first pipe
// 		// read a string using first pipe

// 		//write input str and close writing end of first pipe
// 		write(fd1[1], input_str, strlen(input_str) + 1);
// 		close(fd1[1]);

// 		//wait for chile to send string
// 		wait(NULL);

// 		close(fd2[1]); //close writing end of second pioe

// 		//read string from child, print, and close
// 		read(fd2[0], concat_str, 100);
// 		printf("concatenated str%s\n", concat_str);
// 		close(fd2[0]);
// 		}

// 	else {
// 		close(fd1[1]);// close writind end of first pipe
		 
// 		//read string using first pipe
// 		char concat_str[100];
// 		read(fd1[0], concat_str, 100);
// 		// the first param is used to access the first element of the array
// 		// the read end of the pipe
// 		// the second param pointer to the buffer where the data read from the file descriptor will be stored
// 		// third is maximum number of bytes  to be readfrom file descriptor and stored in second param
// 		// this will block (wait) until data is available to be read from fd
// 		// typically used when one process writes data to a pipe and another reads from a pipe

// 		//concatenate a fixed str
// 		int k = strlen(concat_str);
// 		int i;
// 		for (i = 0; i < strlen(fixed_str); i++)
// 			concat_str[k++] = fixed_str[i];

// 			concat_str[k] = '\0';
		
// 		// now we close all reading ends
// 		close(fd1[0]);
// 		close(fd2[0]);

// 		//write concatenated string and close writing end
// 		write(fd2[1], concat_str, strlen(concat_str) + 1);
// 		close(fd2[1]);
		
// 	}
// 	return 1;
// }