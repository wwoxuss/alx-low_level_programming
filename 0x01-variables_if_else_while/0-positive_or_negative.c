#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main function shows if the number is positive, zero, or negative */

/* Return always 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>00){
		printf("%d is positive\n", n);
	}else if(n == 0){
		printf("%d is zero", n);
	}else{
		printf("%d is negative", n);
	}	
	return (0);
}
