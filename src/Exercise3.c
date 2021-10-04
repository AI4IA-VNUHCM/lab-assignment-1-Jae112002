/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
   int x,i,n; 
	 
	printf("Enter n:\n"); 
	scanf("%d",&n); 
	for(x=2;x<=n;x++) 
	{ 
 	 i=2; 
 	while(x%i!=0) 
  	{ 
  		i++; 
  	} 
 	if(i==x) 
  	{ 
		printf("%d ",x) ; 
	} 	 
  } 
	return 0;
}
