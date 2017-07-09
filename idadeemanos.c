#include <stdio.h>
int main(){
	int idade, dias, mes, resultado;
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Informe quantos meses: ");
	scanf("%d", &mes);
	printf("Informe quantos dias: ");
	scanf("%d", &dias);
	resultado = (idade*365) + (mes*30) + dias;
	printf("Sua idade em dias é: %d", resultado);
		
	
return 0;
}
