/*Reemplazador de espacios de tabulación y /
 * Alex Nicolás Falcon Rodríguez
 * Domingo 19/04/2015
 */

#include <stdio.h>

int main(void) {

	int c;

	printf ("ingrese la cadena\n");
	c = getchar();

	while ( c != EOF ){

		if ( c == 92 )
		{
			putchar(c=92);
			putchar(c=92);
			printf("\n");
		}
		else if ( c == 9)
		{
			putchar(c=92);
			putchar(c=116);
			printf("\n");
		}
		else
		{
			putchar(c);
			printf("\n");
		}

		c = getchar();
	}



	return 0;
}