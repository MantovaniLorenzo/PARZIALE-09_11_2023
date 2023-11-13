#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int x;
	int tmp, i = 0, sum = 0;
	float media;

	printf("Inserire un valore soglia: ");
	scanf("%d", &x);

	while (sum <= x) { // uguale in modo tale che se la somma raggiunta corrisponde al valore soglia il programma non termini in quanto non è stata superata

		printf("Inserire un valore: ");
		scanf("%d", &tmp);

		sum += tmp;
		i++;
	}

	printf("La somma dei numeri inseriti e' stata %d ed ha superato il valore soglia %d.\n", sum, x);
	
	media = (float)sum / i;

	printf("La media dei valori acquisiti e' stata %.2f", media);


	return 0;
}