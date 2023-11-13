#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x; 
	printf("Inserire un valore: ");
	scanf("%d", &x);

	

	while (x != 0) {

		
	

		if ((x > 0 && x % 3 == 0) || (x < 0 && x % 2 == 0)) {
			printf("Soddisfatta la condizione 1. \n");
		}
		else if ((x < 0) && (x % 2 != 0) && (x % 5 == 0)) {
			printf("Soddisfatta la condizione 2. \n");
		}
		else if ((x < 0) && (x % 2 != 0) && (x % 5 != 0)) {
			printf("Soddisfatta la condizione 3. \n");
		}
		else printf("Soddisfatta la condizione 4. \n");


		printf("Inserire un valore: ");
		scanf("%d", &x);
		 
	}

	printf("Il programma e' terminato. \n");



	
	return 0;
}