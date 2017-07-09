#include <stdio.h>
#define Per_dir 0.28
#define impost 0.45
int main(){
	float valorcar, custf;
	printf("Informe o valor de fábrica do carro: ");
	scanf("%f", &valorcar);
	custf = (Per_dir * valorcar) + (impost * valorcar) + valorcar;
	printf("Custo Final: %.2f\n", custf);
	
return 0;
}
