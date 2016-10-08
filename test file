/* Test program for ENGGEN 131 Project Two - 2016 */
/* Prepared by Paul Denny, September 2016 */

#include "project.h"

/* You are encouraged to add additional tests to the testing functions */
/* defined in this program.  There are ten test functions, one for each */
/* of the functions you are required to define for this project */

void Test_Perimeter(void);
void Test_Volume(void);
void Test_PrimeBelow(void);
void Test_Abbreviate(void);
void Test_Strikeout(void);
void Test_KthLargest(void);
void Test_BoundingRectangle(void);
void Test_Codeword(void);
void Test_TallestVine(void);
void Test_MakeMove(void);

/* You do not need to modify the main() function - it simply calls each of */
/* the test functions */
int main(void)
{
	// Print welcome message
	printf("\nWelcome to the minimal test program for Project Two.\n\n");
	printf("This test program provides an absolute minimal set of test cases\n");
	printf("that you can use to automatically test the functions you have defined\n");
	printf("for the project.  Failing any of these tests is an indication that there\n");
	printf("is an error in your implementation.  However, because this is a minimal\n");
	printf("set of tests, passing all of them is no guarantee that your functions\n");
	printf("are defined correctly.  It is up to you to test your code more thoroughly,\n");
	printf("but hopefully this template will be a useful guide for you.\n\n");
	printf("Good luck!\n");

	// Automated testing of each function
	Test_Perimeter();
	Test_Volume();
	Test_PrimeBelow();
	Test_Abbreviate();
	Test_Strikeout();
	Test_KthLargest();
	Test_BoundingRectangle();
	Test_Codeword();
	Test_TallestVine();
	Test_MakeMove();

	return 0;
}

void Test_Perimeter(void)
{
	printf("\nTesting Perimeter()...\n");
	if (Perimeter(10, 25) != 70) {
		printf("  - FAIL (10, 25)\n");
	} else {
		printf("  - PASS\n");
	}
	if (Perimeter(20, -1) != 0) {
		printf("  - FAIL (20, -1)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_Volume(void)
{
	printf("\nTesting Volume()...\n");
	if ((Volume(10) < 4188.78) || (Volume(10) > 4188.80)) {
		printf("  - FAIL (10)\n");
	} else {
		printf("  - PASS\n");
	}
	if ((Volume(-5) < -0.001) || (Volume(-5) > 0.001)) {
		printf("  - FAIL (-5)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_PrimeBelow(void)
{
	printf("\nTesting PrimeBelow()...\n");
	if (PrimeBelow(10) != 7) {
		printf("  - FAIL (10)\n");
	} else {
		printf("  - PASS\n");
	}
	if (PrimeBelow(47) != 43) {
		printf("  - FAIL (47)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_Abbreviate(void)
{
	char wordA[MAX_ARRAY_SIZE] = "facetiously";
	char wordB[MAX_ARRAY_SIZE] = "sequoia";
	printf("\nTesting Abbreviate()...\n");
	Abbreviate(wordA);
	Abbreviate(wordB);
	if (strcmp(wordA, "fctsly") != 0) {
		printf("  - FAIL (wordA)\n");
	} else {
		printf("  - PASS\n");
	}
	if (strcmp(wordB, "sq") != 0) {
		printf("  - FAIL (wordB)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_Strikeout(void)
{
	char wordA[MAX_ARRAY_SIZE] = "nail";
	char phraseA[MAX_ARRAY_SIZE] = "get the nail out";
	char wordC[MAX_ARRAY_SIZE] = "cat";
	char phraseC[MAX_ARRAY_SIZE] = "cat dog cat cat ant cat";
	printf("\nTesting Strikeout()...\n");
	Strikeout(wordA, phraseA);
	Strikeout(wordC, phraseC);
	if (strcmp(phraseA, "get the **** out") != 0) {
		printf("  - FAIL (wordA)\n");
	} else {
		printf("  - PASS\n");
	}
	if (strcmp(phraseC, "*** dog *** *** ant ***") != 0) {
		printf("  - FAIL (wordB)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_KthLargest(void)
{
	int valuesA[12] = {4, 3, 7, 6, 3, 1, 4, 2, 6, 7, 6, 7};
	int valuesB[5] = {3, 3, 999, 3, 3};
	printf("\nTesting KthLargest()...\n");
	if (KthLargest(2, valuesA, 12) != 6) {
		printf("  - FAIL (valuesA)\n");
	} else {
		printf("  - PASS\n");
	}
	if (KthLargest(3, valuesB, 5) != -1) {
		printf("  - FAIL (valuesB)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_BoundingRectangle(void)
{
	printf("\nTesting BoundingRectangle()...\n");

	Rectangle a, b, c1, c2, tiny;
	a.row = 35;
	a.col = 20;
	a.width = 110;
	a.height = 50;
	b.row = 70;
	b.col = 10;
	b.width = 35;
	b.height = 55;
	tiny.row = 45;
	tiny.col = 45;
	tiny.width = 5;
	tiny.height = 5;
	c1 = BoundingRectangle(a, b);
	if (c1.row!=35 || c1.col!=10 || c1.width!=120 || c1.height!=90) {
		printf("  - FAIL (c1)\n");
	} else {
		printf("  - PASS\n");
	}
	c2 = BoundingRectangle(a, tiny);
	if (c2.row!=35 || c2.col!=20 || c2.width!=110 || c2.height!=50) {
		printf("  - FAIL (c2)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_Codeword(void)
{
	printf("\nTesting Codeword()...\n");
	printf("  - This function cannot be tested automatically\n");
}


void Test_TallestVine(void)
{
	printf("\nTesting TallestVine()...\n");
	if (TallestVine(501, 491, 8) != 609) {
		printf("  - FAIL (501, 491, 8)\n");
	} else {
		printf("  - PASS\n");
	}
	if (TallestVine(20, 1000, 73) != 1003) {
		printf("  - FAIL (20, 1000, 73)\n");
	} else {
		printf("  - PASS\n");
	}
}

void Test_MakeMove(void)
{
	int i, j;
	int result;
	int correct = 1;

	printf("\nTesting MakeMove()...\n");

	int in_cave[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 0, 0, 2, 0, 0, 0, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 3, 0, 4, 5},
		{1, 0, 0, 1, 0, 0, 2, 0, 0, 1},
		{1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 1, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};

	int out_cave[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 0, 0, 2, 0, 0, 0, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 4, 5},
		{1, 0, 0, 1, 0, 0, 3, 0, 0, 1},
		{1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 1, 0, 0, 0, 0, 0, 1, 1},
		{1, 1, 1, 1, 1, 0, 2, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};

	result = MakeMove(in_cave, 's');

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (out_cave[i][j] != in_cave[i][j]) {
				correct = 0;
			}
		}
	}

	if (correct) {
		printf("  - PASS\n");
	} else {
		printf("  - FAIL (MakeMove)\n");
	}

}
