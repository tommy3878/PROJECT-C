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

/* Your comment goes here*/
int Perimeter(int width, int height)
{
	if ((width <= 0) || (height <= 0)) {      //check if width or height is less than or equal to 0
		return 0;                           //return 0 if so
	}
	  else {
		 int Perimeter = (width + height) * 2;
		 return Perimeter;                   //return the perimeter of the field
	  }
}

/* Your comment goes here*/
double Volume(int radius)
{
	if (radius < 0) {
		return 0;
	}
	else {
		double PI = 3.141592654;              // You may use this value to represent PI
		double Volume = radius * radius * radius * PI * 4 / 3;
		return Volume;
	}
}

/* Your comment goes here*/
int PrimeBelow(int upper)
{
    if (upper <= 2){
        return -1;
    } else {
        int i, n;
        for (n = upper - 1; n > 2; n--) {
            for ( i = 2 ; i <= n - 1 ; i++ )
            {
                if ( n%i == 0 )
                    break;
            }
            if ( i == n )
                return n;
        }
    }
   return 0;
}

/* Your comment goes here*/
void Abbreviate(char* word)
{
    int i,j;
    unsigned long l;
    
    l = strlen(word);
    for (i=0; i <= l; i++) {
        switch (*(word+i)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                // if a char is a vowel, then re-arrange of the array is triggered
                for (j=i; j<= l; j++) {
                    // Replace string from next char
                    *(word+j) = *(word+(j+1));
                }
                l--; // Reset the length of the array
                i--;
                break;
            default:
                break;
        }
    }
}

/* Your comment goes here*/
void Strikeout(char *hide, char *phrase)
{
    int i,j,l,s = 0, match = 0;
    
    l = strlen(hide);
    
    for (i=0; i <= strlen(phrase); i++)
    {
        if (match == l) {
            *(phrase+i)='*';
            s++;
            if(s==match){
                match = 0;
                s = 0;
            }
        } else {
            for (j=0; j < l; j++) {
                if(*(phrase+i) == *(hide+match)){
                    match++;
                    break;
                } else {
                    match = 0;
                }
            }
            if(match == l){
                i = i - l;
            }
        }
    }
}

/* Your comment goes here*/
int KthLargest(int k, int *values, int numValues)
{
    int i, j, tmp, n, s, t = 0;
    n = numValues;
    s = k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (values[i] < values[j])
            {
                tmp =  values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
        }
    }
    for (i=0; i<n; i++) {
        if (s == 1 | t == s) {
            return *(values+(i-1));
            break;
        } else {
            if (values[i] > values[(i+1)]){
                t++;
            }
        }
    }
    return -1;
}


/* Your comment goes here*/
Rectangle BoundingRectangle(Rectangle r1, Rectangle r2)
{
    Rectangle result;
 
    //Set row
    if(r1.row < r2.row){
        result.row = r1.row;
        if (r1.row + r1.height < r2.row + r2.height) {
            result.height = r2.row - r1.row;
        } else {
            result.height = 0;
        }
        
    } else {
        result.row = r2.row;
        result.height = r1.row - r2.row;
    }
    
    //Set Col
    if(r1.col < r2.col){
        result.col = r1.col;
        if (r1.col + r1.width < r2.col + r2.width) {
            result.width = r2.col - r1.col;
        } else {
            result.width = 0;
        }
    } else {
        result.col = r2.col;
        result.width = r1.col - r2.col;
    }
    
    //Set Width
    if (r1.width > r2.width) {
        result.width = result.width + r1.width;
    } else {
        result.width = result.width + r2.width;
    }
    
    //Set Height
    if (r1.height > r2.height) {
        result.height = result.height + r1.height;
    } else {
        result.height = result.height + r2.height;
    }
    
    // printf("CR%d, CC%d, CW%d, CH%d \n",result.row,result.col, result.width, result.height);

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
    int x, y, z, xn, yn, j;
    char str[MAX_ARRAY_SIZE];
    
    x = seedA;
    y = seedB;
    xn = days;
    yn = days;
    
//    printf("x %d y %d\n", x, y);
    while (xn + yn != 0) {
        if (x == y) {
            return x;
        }else if (x > y) {
            sprintf(str, "%d", y);
            z = 0;
            for (j=0; j < strlen(str); j++) {
                z = z + str[j]-48;
            }
            //            printf("y%d z%d\n",y,z);
            y = y + z;
            
            yn--;
        } else {
            sprintf(str, "%d", x);
            z = 0;
            for (j=0; j < strlen(str); j++) {
                z = z + str[j]-48;
            }
            //            printf("x%d z%d\n",x,z);
            x = x + z;
            xn--;
        }
//        printf("x %d y %d\n", x, y);
    }
    
//    printf("x %d y %d\n", x, y);
    
    if (x > y) {
//        printf("%d \n", x);
        return x;
    }else{
//        printf("%d \n", y);
        return y;
    }

}


/* Your comment goes here*/
int MakeMove(int cave[10][10], char move)
{
    char cmd;
    int caverRow = 0, caverCol = 0;
    int row = 0, col = 0;
    int cmdRow = 0, cmdCol = 0;
    
    printf("\nTesting MakeMove()...\n");
    
    // Print matrix
    for (int row=0; row<10; row++)
    {
        for(int col=0; col<10; col++)
            printf("%d     ", cave[row][col]);
        printf("\n");
    }
    
    // Locate the caver for action
    for (int row=0; row<10; row++)
    {
        for(int col=0; col<10; col++)
            if(cave[row][col] == 3){
                caverRow = row;
                caverCol = col;
                break;
            }
    }
    
    printf("caverR%d caverC%d \n",caverRow,caverCol);
    
    // Action
    cmd = move;
    printf("command :%c \n", cmd);
    
    // down
    printf("command Down :%c \n", cmd);
    switch (cmd) {
        case 's': //Down
            cmdRow = caverRow+1;
            cmdCol = caverCol;
            break;
        case 'w': //Up
            cmdRow = caverRow-1;
            cmdCol = caverCol;
            break;
        case 'a': //Left
            cmdRow = caverRow;
            cmdCol = caverCol-1;
            break;
        case 'd': //Right
            cmdRow = caverRow;
            cmdCol = caverCol+1;
            break;
        default:
            break;
    }

    
    
    printf("cmdR%d cmdC%d \n",cmdRow,cmdCol);
    printf("cave value %d \n",cave[cmdRow][cmdCol]);
    // move object
    if (cave[cmdRow][cmdCol] == 0) { //Move if space available
        cave[cmdRow][cmdCol] = 3; //Move a step only
        cave[caverRow][caverCol] = 0; //Clear up old position
    } else if (cave[cmdRow][cmdCol] == 1 && cave[cmdRow][cmdCol] == 3){ //Stop if wall or another caver
        return 0;
    } else if (cave[cmdRow][cmdCol] == 2){//If a boulder exist
        cave[cmdRow][cmdCol] = 3; // Move boulder
        cave[caverRow][caverCol] = 0; // caver move
        
        switch (cmd) {
            case 's':
                for (int row=cmdRow+1; row<10; row++)
                {
                    printf("row :%d \n", row);
                    printf("Cave value %d\n",cave[row][cmdCol]);
                    switch (cave[row][cmdCol]) {
                        case 1: //Hit the wall
                            cave[row-1][cmdCol] = 2;
                            //Print Matrx for debuging
                            for (int row=0; row<10; row++)
                            {
                                for(int col=0; col<10; col++)
                                    printf("%d     ", cave[row][col]);
                                printf("\n");
                            }
                            //End of Print Matrx
                            break;
                        case 3: //Killing caver haha :P
                            cave[row][cmdCol] = 0;
                            return 0;
                        case 4: //Filling hole
                            cave[row][cmdCol] = 0;
                            return 1;
                        default:
                            break;
                    }
                }
                break;
            case 'w':
                for (int row=cmdRow-1; row>=0; row--)
                {
                    printf("row :%d \n", row);
                    printf("Cave value %d\n",cave[row][cmdCol]);
                    switch (cave[row][cmdCol]) {
                        case 1: //Hit the wall
                            cave[row+1][cmdCol] = 2;
                            break;
                        case 3: //Killing caver haha :P
                            cave[row][cmdCol] = 0;
                            return 0;
                        case 4: //Filling hole
                            cave[row][cmdCol] = 0;
                            return 1;
                        default:
                            break;
                    }
                }
                break;
            case 'a':
                for (int col=cmdCol-1; col>=0; col--)
                {
                    printf("row :%d \n", col);
                    printf("Cave value %d\n",cave[cmdRow][col]);
                    switch (cave[cmdRow][col]) {
                        case 1: //Hit the wall
                            cave[cmdRow][col+1] = 2;
                            break;
                        case 3: //Killing caver haha :P
                            cave[cmdRow][col] = 0;
                            return 0;
                        case 4: //Filling hole
                            cave[cmdRow][col] = 0;
                            return 1;
                        default:
                            break;
                    }
                }
                break;
            case 'd':
                for (int col=cmdCol+1; col<10; col++)
                {
                    printf("row :%d \n", col);
                    printf("Cave value %d\n",cave[cmdRow][col]);
                    switch (cave[cmdRow][col]) {
                        case 1: //Hit the wall
                            cave[cmdRow][col-1] = 2;
                            break;
                        case 3: //Killing caver haha :P
                            cave[cmdRow][col] = 0;
                            return 0;
                        case 4: //Filling hole
                            cave[cmdRow][col] = 0;
                            return 1;
                        default:
                            break;
                    }
                }
                break;
            default:
                break;
        }
        return 0;
    } else if (cave[cmdRow][cmdCol] == 4){ //Failling into hole
        cave[caverRow][caverCol] = 0;
        return 1;
    } else if (cave[cmdRow][cmdCol] == 5){ //Exist the Cave
        cave[caverRow][caverCol] = 0;
        cave[cmdRow][cmdCol] = 3;
        return 2;
    }
    return 0;
}
