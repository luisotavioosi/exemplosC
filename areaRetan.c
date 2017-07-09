#include <stdio.h>
int main(){
	float altura, base, area;
	printf("Informe o valor da base e da altura: ");
	scanf("%f, %f", &base, &altura);
	area = base*altura;	
	printf("Area: %.2f", area);	
	
return 0;
}
