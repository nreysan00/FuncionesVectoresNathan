/*
 * vectores.c
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>

void pedirVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d",&vector);
	}
}

void mostrarVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("%d ", vector[i]);
	}
}

void mostrarVectorCorchete(int tam, int vector[]){
	int i;
	printf("[");
	for(i=0;i<tam;i++) {
		printf("%d",vector[1]);
	}
	printf("]");
}

int posicionPrimerElemento(int tam, int vector[], int buscar){
	int pos=-1,i;
	for(i=0;i<tam && pos<0;i++);
		if(vector[i]==buscar){
			pos=1;
		}
		return pos;
}
