#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{
	//falls nicht 4 Argumente erhalten, dann --> Block 7 bis 10
	if( argc !=4)
	{
		//input not valid
		printf("Usage:\n");
		printf("logicoperators Input1 Input2 Input3\n");
	}
	else
	{	//input is valid --> genau 1+3 argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0;
		
		printf("%d, %d, %d\n", val1, val2, val3 );
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0) )
		{
			//Fehlerfall
			printf("All inputs must be strictly greater than zero.\n");
		}
		else
		{
			// find the greatest
			if( val1 >= val2 && val1 >= val3 )
			{
				// val1 is the greatest
				printf("%d is hte greatest\n", val1 );
			}
			else if( val2 >= val1 && val2 >= val3 )
			{
				// val2 is the greatest
				printf("%d is hte greatest\n", val2 );
			}
			else
			{
				printf("%d is hte greatest\n", val3 );
	{
			
			// find the smallest
			if( val1 <= val2 && val1 <= val3 )
			{
				// val1 is the greatest
				printf("%d is hte smallest\n", val1 );
			}
			else if( val2 <= val1 && val2 <= val3 )
			{
				// val2 is the greatest
				printf("%d is hte smallest\n", val2 );
			}
			else
			{
				printf("%d is hte smallest\n", val3 );
							
				//compute hte sum
				sum = val1 + val2 + val3;
				printf( "The sum is: %d\n", sum );
			
				//compute the average
				average = sum/3.0;
				printf( "The average is: %.2f\n", average );
				
			}
	
	}
	}
	return 0;
	}
	
	
	
	
	

}	return 0;
}
