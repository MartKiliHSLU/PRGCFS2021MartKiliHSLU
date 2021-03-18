#include <stdio.h>

int main(int argc, char *argv[] )
{
	if( argc != 3){
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}
	else
	{
	
		printf("Number of input arguments: %d\n", argc );

		for( int i=0; i < argc; i++)
		{
		printf("Argument %d was %s\n", i, argv[i]);
		}
	}
	return 0;
}
