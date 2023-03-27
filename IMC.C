#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float peso, altura, IMC;
	char op;
	
	do{
		printf("Insira a sua altura:\n");
		scanf("%f", &altura);
		fflush(stdin);
		
		printf("Insira o seu peso:\n");
		scanf("%f", &peso);
		fflush(stdin);
		
		IMC = peso /(altura * altura);
		
		printf("Seu IMC é: %.2f.\n", IMC);
		
		if (IMC < 21.0){
			printf("Abaixo do peso.\n");
		} else {
			if (IMC > 30.75){
				printf("Obeso.\n");
			}
		 else {
		    printf("Peso padrão\n");
		 }
		}
		
		printf("Deseja executar novamente? Se sim digite Y.\n");
		scanf("%c", &op);
		fflush(stdin);
	} while (op == 'y' || op == 'Y');
	
	system("pause");	
}