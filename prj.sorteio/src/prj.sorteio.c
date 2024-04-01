/*
 ============================================================================
 Name        : sorteio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int numSorteado = rand() % 101;

	printf("LOteria");
	printf("\nEscolha um número entre 0 e 100:");
	int numEscolhido;
	fflush(stdout);
	scanf("%d", &numEscolhido);

	if(numEscolhido == numSorteado){
		printf("Parabéns, você ganhou!");}
	else{
		printf ("\nVocê perdeu! O número sorteado foi: %d. Tente novamente!", numSorteado);
	}
	return EXIT_SUCCESS;
}
