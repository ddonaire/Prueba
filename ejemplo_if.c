# include <stdio.h>

int main () {
	
int n;

printf("Escribe un número entero\n");

scanf(" %d", &n);

if (n % 2 == 0) // Condición

{// Uso de llaves
printf("Se cumple la condición: ");

printf("El número %d es par.\n", n);
} // Fin de if

printf("Gracias por participar.\n");

return 0;
}

