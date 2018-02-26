/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

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
	printf("The number of Blanks is: %d\n", blanks);
	printf("The number of Tabs is: %d\n", tabs);		
	printf("The number of NewLines is: %d\n", newLine);
}
