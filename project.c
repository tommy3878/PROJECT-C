#include "project.h"

/*
This source file is the one that you will submit for marking.
Currently, all of the function implementations below are incorrect.

***** PLEASE NOTE *****
IF YOU CHOOSE NOT TO IMPLEMENT A FUNCTION, DO NOT DELETE IT FROM
THIS SOURCE FILE.  WHEN YOU SUBMIT THIS SOURCE FILE FOR MARKING,
ALL TEN FUNCTIONS MUST BE PRESENT.

You may define as many additional "helper" functions as you like.

Good luck!
*/

/* This function calculates the perimeter of the field after the user inputs the width and the height of the field*/
//input: width, height
//output: perimeter
int Perimeter(int width, int height)
{ 
	if ((width < 0) || (height < 0)) {      //check if width or height is less than or equal to 0
		return 0;                           //return 0 if so
	} 
	else {
		int Perimeter = (width + height) * 2;
		return Perimeter;                   //return the perimeter of the field
	} 
}


/*This function calculates the volume of the sphere*/
//input: radius 
//output: volume
double Volume(int radius)
double Volume(int radius)
{
	// return
	if (radius < 0) {      
		return 0;
	}
	else {
		double PI = 3.141592654;              // You may use this value to represent PI
		double Volume = radius * radius * radius * PI * 4 / 3;
		return Volume;
	}
}

/*This function takes one integer as the upper limit, and return the largest prime number that is less than the upper limit*/
int PrimeBelow(int upper)
{
	if (upper <= 2) {
		return -1;
	} 
	
	else if {
		int i;
		int j;
		for (i = upper, i > 2, i++) {
			for (j = i - 1, i >= 2, j--)
				if (i % j == 0) {
					j--;
				}
				else if {
					return i;
				}
		}
	return 0;
}

/*This function is should delete all the vowels in the inputed string*/
//input: String of characters
//output: String of characters without vowels
void Abbreviate(char* word)
{
	int i, j;
	int length = strlen(string);
	int toDelete[4] = { a,e,i,o,u }

	for (i = 0; i<length; i++) {

		if (string[i] == toRemove) {
			for (j = i; j< length-1; j++) {
				string[j] = string[j + 1];
			}
			length--;
			string[length] = '\0';
			i--;
		}
	}
}

/* Your comment goes here*/
void Strikeout(char *hide, char *phrase)
{
	phrase[0] = hide[0];
}

/* Your comment goes here*/
int KthLargest(int k, int *values, int numValues)
{
	return values[0] + k + numValues;
}

/* Your comment goes here*/
Rectangle BoundingRectangle(Rectangle r1, Rectangle r2)
{
	Rectangle result;
	result.row = r1.row;
	result.col = r2.col;
	return result;
}

/* Your comment goes here*/
void Codeword(char *result)
{
	// Replace "mycodeword" with the correct word
	// Make sure you have no spaces anywhere in the word
	strcpy(result, "mycodeword");
}

/* Your comment goes here*/
int TallestVine(int seedA, int seedB, int days)
{
	return seedA + seedB + days;
}

/* Your comment goes here*/
int MakeMove(int cave[10][10], char move)
{
	cave[0][0] = 0 + move;
	return -1;
}
