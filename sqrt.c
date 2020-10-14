/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Below is the main function */
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	if(input<0){ /* sqrt of negative numbers */
		printf("Sqrt of %d is %fi\n",input,sqrt(-1*input));
	}
	else{	/* sqrt of positive numbers */
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	}

	printf("End of program. Exiting....\n");	

	return(0);

} // end main
