#include <stdio.h>

void CicloFor(int numero1, int numero2){
	printf("Ciclo For: \n");
	for(numero1; numero1 <= numero2; numero1++){
	printf("%d\n", numero1);
	}
}

void CicloWhile(int numero1, int numero2){
	printf("Ciclo While: \n");
	int num1 = numero1;
	while(num1 <= numero2){
		printf("%d\n", num1);
		num1 ++;
	}
}

void CicloDoWhile(int numero1, int numero2){
	printf("Ciclo DoWhile: \n");
	do{
		printf("%d\n", numero1);
		numero1++;
	}while(numero1 <= numero2);
}

int main(){
	int numero1, numero2;
	
	printf("Escriba el numero para empezar el conteo: ");
	scanf("%d", &numero1);
	do{
		printf("Escriba el numero para terminar el conteo: ");
		scanf("%d", &numero2);
	}while(numero2<numero1);
	
	CicloFor(numero1, numero2);
	CicloWhile(numero1, numero2);
	CicloDoWhile(numero1, numero2);
	return 0;
}
