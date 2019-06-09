//1.5.2 Character Counting

/*
How do you type EOF?

From the command-line, when you are running your program you can send EOF to the program with Ctrl - D (Unix) or CTRL - Z (Microsoft).
*/

#include <stdio.h>

/* count characters in input; 1st version */

//So run, then type things, then Ctrl-D to end the program.
int main() {
	
	long nc;
	nc = 0;
	
	while (getchar() != EOF) {
		++nc;
	}
	
	printf("%ld\n", nc);
}
