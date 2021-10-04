/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	int x = 0,y = 0;
    int rows = 0;
    int thick =0;
    printf("Enter the number of rows = ");
    scanf("%d",&rows);
    printf("Enter the number of think = ");
    scanf("%d",&thick);
    for(x=1; x<=rows;x++)
    {
        for(y=x; y<=rows; y++){
            printf(" ");
        }    
       	for(y=1; y<=((2*x)-1); y++){
            if(x==rows || y==1|| y==(2*x-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
	
	return 0;
}