#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, reajuste;
	
		printf("Digite seu salario\n");
		scanf("\n%f",&salario);
		
		if (salario<=300);
		reajuste= salario*1.50;
		printf("\nSeu salario reajustado é%f:",reajuste);
		
		if (salario>300);
		reajuste= salario*1.30;
		printf("\n Seu salario reajustado é%f:",reajuste);
		
		system("pause");
		return 0;
	
}
