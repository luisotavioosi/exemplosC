#include <stdio.h>
int main(){
	float salario, reajuste, resultado;
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
	printf("Informe o valor de reajuste: ");
	scanf("%f", &reajuste);
	resultado = ((reajuste/100 )* salario + salario);
	printf("%.2f", resultado);	
	
return 0;
}
