/* The header file for ENGGEN 131 Project Two - 2016 */
/* Prepared by Paul Denny, October 2016 */

/* You are NOT permitted to make ANY changes to this header file */
/* Your project will be marked by an automated program that will use */
/* this header file in exactly this form */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* Any arrays that are passed as inputs to functions are guaranteed to */
/* be no larger than this constant */
#define MAX_ARRAY_SIZE 200

/* The structure definition for a Rectangle - the row and col fields represent
   the top left hand corner, and the width and height fields give the dimensions */
typedef struct {
	int row;
	int col;
	int width;
	int height;
} Rectangle;

/* The required functions for the project */
int Perimeter(int width, int height);
double Volume(int radius);
int PrimeBelow(int upper);
void Abbreviate(char* word);
void Strikeout(char *hide, char *phrase);
int KthLargest(int k, int *values, int numValues);
Rectangle BoundingRectangle(Rectangle r1, Rectangle r2);
void Codeword(char *result);
int TallestVine(int seedA, int seedB, int days);
int MakeMove(int cave[10][10], char move);
