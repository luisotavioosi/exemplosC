#include <stdio.h>
void troca (int *A, int *B){
	int temp;
	temp = *A; 
	*A = *B; 
	*B = temp;
	
return ;	
}
int main(){
	//int *c, *d;
	int a = 10, b =20;
	printf("i = %d \nj = %d\n", a, b);
	//c = &a;
	//d = &b;
	puts("TROCANDO--------------------------");
	troca(&a, &b);
	printf("i = %d \nj = %d\n", a, b);
return 0;
}

