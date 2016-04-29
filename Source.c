/* Name: Sathya Jayakumar
   Student ID: 37044154
   Email Address: sathyajay97@gmail.com
   Purpose: Scans an inputted string of text and determines if it is a happy message or a sad message by counting the number of respective faces
   Source: 2015 Canadian Computing Competition: Junior Division
   Question #2: "We often include emoticons in our text messages to indicate how we are feeling. The three consecutive characters ':-)' indicate
                a happy face and the three consecutive characters ':-(' indicate a sad face. Write a program to determine the overall mood of a
                message. */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//Maximum length of the message
#define TEXT_LENGTH 200

int main() {
	//Counters for smiley and sad faces respectively
	int happy = 0;
	int sad = 0;

	//Index in 'for' loop to read text string
	int index;

	//Variable for message inputted by user
	char text[TEXT_LENGTH];

	//Message prompt
	printf("Write your text here: ");
	scanf("%[^\n]s", text);

	//Scans inputted array at every character
	for (index = 0; text[index] != '\0'; index++) {

		if (text[index] == ':' && text[index + 1] == '-') {
		
			if (text[index + 2] == ')')
				happy++;

			else if (text[index + 2] == '(')
				sad++;
		}
	}

	//Prints mood of message; 'Happy' if there are more smiley faces, 'Sad' if there are more sad faces, 'None' if there are no faces or as many happy and sad faces
	if (happy > sad)
		printf("\nHappy\n\n");

	else if (happy < sad)
		printf("\nSad\n\n");

	else printf("\nNone\n\n");

	system("PAUSE");
	return 0;
}