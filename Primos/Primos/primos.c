#include "stdio.h"
#include "locale.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	setlocale(LC_ALL, "");

	int i,numero,resultado = 0;
	
	printf("Insira o valor do n�mero que � para ser testado");
	scanf_s("%i", &numero);

	for (i = 2; i < numero; i++){
		if (numero % i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		printf("o n�mero � primo");
	}
	else {
		printf("o n�mero n�o � primo");
	}
}