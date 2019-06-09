// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

/*
How do you type EOF?

From the command-line, when you are running your program you can send EOF to the program with Ctrl - D (Unix) or CTRL - Z (Microsoft).
*/

//So run, then type things, then Ctrl-D to end the program.
int main() {
	
	int c;
	int blanks = 0;
	int tabs = 0;
	int newLine = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++newLine;
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;
	}
	printf("-------------------------------------------------------\n");
	printf("The number of Blanks is: %d\n", blanks);
	printf("The number of Tabs is: %d\n", tabs);		
	printf("The number of NewLines is: %d\n", newLine);
}
