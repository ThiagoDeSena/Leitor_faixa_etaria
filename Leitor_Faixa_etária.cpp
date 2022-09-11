#include <stdio.h>
#include <stdlib.h>
//2. Ler a idade de uma pessoa e classifique na sua faixa etária: criança, adolescente, jovem, adulto ou aposentado.
int main(){
	int idade;
	printf("2. Ler a idade de uma pessoa e classifique na sua faixa etária: criança, adolescente, jovem, adulto ou aposentado.");
	printf("\n\nEscolha a sua faixa etaria de idade: \n");
	printf("(1)0 a 12 anos\n(2)13 a 20 anos\n(3)20 a 59 anos\n(4)Acima de 59 anos\n");
	scanf("%d",&idade);
	
	switch(idade){
		case 1:
			printf("Criança\n");
			break;
		case 2:
			printf("Adolescente\n");
			break;
		case 3:
			printf("Adulto\n");
			break;
		case 4:
			printf("Aposentado\n");
			break;
	}
	system("pause");
	return 0;

}
