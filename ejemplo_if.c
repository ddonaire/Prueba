# include <stdio.h>

int main () {
	
int n;

printf("Escribe un n�mero entero\n");

scanf(" %d", &n);

if (n % 2 == 0) // Condici�n

{// Uso de llaves
printf("Se cumple la condici�n: ");

printf("El n�mero %d es par.\n", n);
} // Fin de if

printf("Gracias por participar.\n");

return 0;
}

