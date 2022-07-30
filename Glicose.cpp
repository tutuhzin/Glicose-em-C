#include <stdio.h>

// Problema Glicose - Lógica de Programação - Estrutura Condicional.


int main(){
	
	float glicose;
	
	printf("DIGITE A MEDIDA DA GLICOSE: ");
	scanf("%f", &glicose);	
	
	if(glicose <= 100 ){
		printf("Normal\n ");
	}

	if(glicose >= 100 && glicose <= 140){
		printf("Elevado");
	}
		else{
			printf("Diabete");
		}
		
		
	
	return 0;
}
