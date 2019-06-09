#include <stdio.h>

/* count lines in input */
/*
How do you type EOF?

From the command-line, when you are running your program you can send EOF to the program with Ctrl - D (Unix) or CTRL - Z (Microsoft).
*/

//So run, then type things, then Ctrl-D to end the program.
int main() {
		
	int c, nl;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}
	printf("%d\n", nl);
}
