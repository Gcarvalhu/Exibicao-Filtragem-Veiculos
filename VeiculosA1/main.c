#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//NOTA: caso tenha dado errado de primeira. v� em ferramentas>op��es do compilador>configura��es>gera��o de c�digo>padr�o linguagem>ISOC99

typedef struct carro

{	

	int cod;

	char marca [20];

	char modelo [20];

	int ano;

	char placa[10];

}CARRO;

CARRO car[10];

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int i;

int opcao;

int ano;

int z;

char modelo[20];

z=0;

ano=0;

i=0;

car[i].cod = 0;

strcpy(car[i].marca,"NULL");

strcpy(car[i].modelo,"NULL");

strcpy(car[i].placa,"NULL");

car[i].ano = 0;

do

{	

	printf("\n op��es:");

	printf("\n 1. CADASTRAR VE�CULO");

	printf("\n 2. LISTAR VE�CULOS");

	printf("\n 3. PESQUISAR UM MODELO");

	printf("\n 4. MOSTRAR VE�CULOS A PARTIR DE UM ANO");

	printf("\n 5. SAIR");

	printf("\n \n DIGITE A OP��O: ");

	scanf("%d",&opcao);

switch(opcao)

{

case 1:

if (car[i].cod<=2)

{

car[i].cod=i;

printf("\n Digite a marca do ve�culo:");

scanf("%s",&car[i].marca);

printf("\n Digite o modelo do ve�culo:");

scanf("%s",&car[i].modelo);

printf("\n Digite a placa do ve�culo:");

scanf("%s",&car[i].placa);

printf("\n Digite o ano do ve�culo:");

scanf("%d",&car[i].ano);

i=i+1;

}

else

{

printf("\n Limite de cadastro � 10!");

}

break;

case 2:

for(int i=0;i<10;i++)
  {


 printf("\n A marca do ve�culo �: %s",car[i].marca);
 printf("\n O modelo do ve�culo �: %s",car[i].modelo);
 printf("\n O ano do ve�culo �: %d",car[i].ano);
 printf("\n A placa do ve�culo �: %s",car[i].placa);
 printf("\n\n =================================== \n \n");


  }


                                                                            
 break;

break;

case 3:

printf("\n  Digite qual o modelo que voc� quer pesquisar:");

scanf("%s",&modelo);

for (int x=0; x<i; x++)

{

if (strcmp(car[x].modelo,strlwr(modelo)) == 0)

{

printf("\n A marca do ve�culo �: %s",car[x].marca);

printf("\n O modelo do ve�culo �: %s",car[x].modelo);

printf("\n O ano do ve�culo �: %d",car[x].ano);

printf("\n A placa do ve�culo �: %s",car[x].placa);

printf("\n\n =================================== \n \n");

z++;

}

}

if (z==0)

{

printf("\n N�O FOI ENCONTRADO O MODELO %s \n\n",modelo);

}

else

{

z=0;

}

break;


case 4:

printf("\n   Modelos a partir do ano:");

scanf("%d",&ano);

for (int x=0; x<i; x++)

{

if (car[x].ano >= ano)

{

printf("\n A marca do ve�culo �: %s",car[x].marca);

printf("\n O modelo do ve�culo �: %s",car[x].modelo);

printf("\n O ano do ve�culo �: %d",car[x].ano);

printf("\n A placa do ve�culo �: %s",car[x].placa);

printf("\n\n =================================== \n \n");

z++;

}

}

if (z==0)

{

printf("\n N�O FOI ENCONTRADO VE�CULOS ACIMA DE %d \n\n",ano);

}

else

{

z=0;

}

break;

case 5:


 printf("\n saindo...");


                                                                                             
break;

default:

printf("\n ESSA OP��O N�O � V�LIDA \n");

break;

}

}

while (opcao!=5 && i<=9);

if (i==9)

{

printf("\n \n LIMITE DE VE�CULOS ALCAN�ADO! \n \n \n");

}

for (int y=0; y<i; y++)

{

printf("\n A marca do ve�culo �: %s",car[y].marca);

printf("\n O modelo do ve�culo �: %s",car[y].modelo);

printf("\n O ano do ve�culo �: %d",car[y].ano);

printf("\n A placa do ve�culo �: %s",car[y].placa);

printf("\n\n =================================== \n \n");

}

return 0;
}
