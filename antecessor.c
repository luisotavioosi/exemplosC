#include <stdio.h>
int main(){
	int valor, antecessor;
	printf("Informe o valor: ");
	scanf("%d", &valor);
	antecessor = valor-1;
	printf("Antecessor de: %d é %d", valor, antecessor);
	
return 0;
}
