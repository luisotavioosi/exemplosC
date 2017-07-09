#include <stdio.h>
int main(){
	float numero_el, brancos, nulos,validos, resultado;
	printf("Informe o número de eleitores no munícipio: ");
	scanf("%f", &numero_el);
	printf("Informe o número de votos brancos: ");
	scanf("%f", &brancos);
	printf("Informe o número de votos nulos: ");
	scanf("%f", &nulos);
	printf("Informe o número de votos válidos: ");
	scanf("%f", &validos);
	resultado = (brancos/numero_el)*100;
	printf("Votos brancos: %.2f%\n ", resultado);
	resultado = (nulos/numero_el)*100;
	printf("Votos nulos: %.2f%\n ", resultado);
	resultado = (validos/numero_el)*100;
	printf("Votos Validos: %.2f%\n ", resultado);
	
return 0;
}
