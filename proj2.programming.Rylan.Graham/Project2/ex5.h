/* ----------------------------------------------------------------------------------- */
/*     Rylan Graham																       */
/* ----------------------------------------------------------------------------------- */

#ifndef EX5_H
#define EX5_H

#include "checkTest.h"

#include <stdio.h>
#include <string.h>

int countWordInFile(const char* filename, const char* word)
{
	FILE* file1;
	file1 = fopen(filename, "r");

	if (file1 != NULL) {
		int ticker = 0;
		const char* string[100];

		while (!feof(file1)) {
			fscanf(file1, "%s", &string);

			if (strcmp(string, word) == 0) {
				ticker++;
			}
		}
		return ticker;


	}
}
	

// DO NOT MODIFY THE CODE BELOW!!
// NO MODIFICAR EL CODI DEL TEST!!
// NO MODIFICAR EL CODIGO DEL TEST!!

void testEx5()
{
    CHECK("Ex 5 - countWordInFile", countWordInFile("ex1_txt1.txt", "one") == 10 &&
		countWordInFile("ex1_txt1.txt", "four") == 7 &&
		countWordInFile("ex1_txt1.txt", "My") == 0 &&
		countWordInFile("ex1_txt1.txt", "Guybrush") == 0 &&
		countWordInFile("ex1_txt1.txt", "ten") == 1 &&
		countWordInFile("ex1_txt1.txt", "hello") == 0 &&
		countWordInFile("ex1_txt2.txt", "one") == 0 &&
		countWordInFile("ex1_txt2.txt", "four") == 0 &&
		countWordInFile("ex1_txt2.txt", "My") == 1 &&
		countWordInFile("ex1_txt2.txt", "Guybrush") == 1 &&
		countWordInFile("ex1_txt2.txt", "ten") == 0 &&
		countWordInFile("ex1_txt2.txt", "hello") == 0);
}

#endif // EX1_H
