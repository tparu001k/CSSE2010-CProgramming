/* Start from the provided file lab09.c. (This program can be found on Blackboard.
The program prompts for a string (max 80 characters) and converts uppercase
characters to lowercase.) Modify the program to perform the following actions.
Test your program after each step.
a. Convert lowercase characters to uppercase instead.
b. Count the number of each type of letter (A to Z) and print a table showing
these counts. Ignore non-alphabetic characters.
c. Accept 20 lines of text (each up to 80 characters) instead of 1 line, then print
a count of each letter seen (the total over all lines).
d. As per (c), but the program accepts any number of lines of text, up to when
it sees a line containing only the text “END” (without the quotes). */

#include <stdio.h>
#include <string.h>

int main(void) {	
	char str[81];
	int i, len;
	/* Read a line of text from the user. Accepts up to
	** 80 characters and then null terminates the string.
	** (Newline remains at the end of the line. If the user
	** entered too many characters then only the first 80
	** are returned.)
	*/
	printf("Enter string:\n");
	fgets(str, 81, stdin);

	/* Determine length of string */
	len = strlen(str);

	/* If last character in string is a newline, replace it with 
	** a null character.
	*/
	if(str[len-1] == '\n') {
		str[len-1] = 0; /* Null character - we could also have said '\0' */
	}

	/* Iterate over the string until we reach a null character
	** (i.e. str[i] == 0) 
	*/
	for(i=0; str[i]; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			/* Character is uppercase. Convert it to
			** lowercase by adding 32 - the difference
			** in ASCII codes between lowercase and uppercase
			** characters. Could also say str[i] += 'a' - 'A'; */
			str[i] -= 32;
		}
	}

	printf("%s\n", str);

	/* b. Count the number of each type of letter (A to Z) and print a table showing
	these counts. Ignore non-alphabetic characters.*/ 
	char letterType[26];
	char j;
	int index=0;
	// Other counters
	int k, l, lCount;

	for(j='A'; j<='Z'; j++) {
		letterType[index]=j;
		index++;
	}
	
	for(k=0;k<26;k++) {
		lCount = 0;
		printf("%2c | ", letterType[k]);
		for(l=0; str[l]; l++) {
			if(letterType[k] == str[l]) {
				lCount++;
			}
		}
		printf("%2d\n", lCount);
	}

	
	return 0;
}