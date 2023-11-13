#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {


	int dim, j, flag;
	int* v, *v_flag;


	printf("Inserire la dimensione del vettore: ");
	scanf("%d", &dim);

	v = (int*)malloc(dim *sizeof(int));
	v_flag = (int*)calloc(dim, sizeof(int));

	if (v == NULL || v_flag == NULL) {
		printf("ERRORE DI ALLOCAZIONE");
		exit(EXIT_FAILURE);
	}

	// ciclo per immettere dati nel vettore

	for (int i = 0; i < dim; i++) {

		printf("Inserire un valore: ");
		scanf("%d", &v[i]);
	}


	// ciclo annidato per capire se sono presenti doppioni e nel caso stampare una volta sola


	for (int i = 0; i < dim; i++) {

		flag = 1;  

		if (v_flag[i] != 1) {    // tramite il vettore parallelo gli elementi doppi non vengono ripetuti in quanto viene segnalato un flag quando vengono incontrati.

			for (j = i + 1; j < dim; j++) {
				if (v[i] == v[j]) {
					flag++;
					v_flag[j] = 1;
				}

			}

			printf("Il valore %d ripetuto %d volte.\n", v[i], flag);

		}

	}



	return 0;
}