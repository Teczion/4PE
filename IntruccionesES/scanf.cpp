/* Uso de la sentencia scanf() */

	#include <stdio.h>

	main() /* Solicita dos datos */
	{
		char nombre[10];
		int edad;
		printf("Introduce tu nombre: ");
		scanf("%s",nombre);
		printf("Introduce tu edad: ");
		scanf("%d",&edad);
	}
