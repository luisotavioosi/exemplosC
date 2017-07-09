#include <stdio.h>
#define fix_sell 0.05
int main(){
/*
A used car dealer pays its sales staff a fixed salary per month,
Plus a commission also fixed for each car sold and plus 5% of the value of the sales by him
Made. Write an algorithm that reads the number of cars it sells, the total value of its
Sales, the fixed salary and the value that he receives per car sold. Calculate and write the final salary of the
salesman.
*/
	float salary, totalsell, salaryf, valueExtra; 
	int numcar;
	printf("Write the salary of func: ");
	scanf("%f", &salary);
	printf("Write number of sells: ");
	scanf("%d", &numcar);
	printf("Write totaly sells in cash: ");
	scanf("%f", &totalsell);
	printf("Write value that he receive per car sold: ");
	scanf("%f", &valueExtra);
	salaryf = (salary + (valueExtra * numcar) + (fix_sell*totalsell));
	printf("Salesman Final is: %.2f\n", salaryf);
return 0;
}
