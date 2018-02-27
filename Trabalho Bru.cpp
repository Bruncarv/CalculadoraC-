/* Atividade Pr�tica II

Desenvolver um programa que preencha um vetor de 10 posi��es com n�meros (positivos ou negativos) informados pelo usu�rio (utilize um loop para requisitar os valores aos estudantes)

Ap�s isso, utilizando um loop, efetue a soma, subtra��o, multiplica��o e divis�o destes 10 n�meros (�ndices do array).

OBS: n�o ser�o aceitos exerc�cios em que a soma � feita sem a utiliza��o do loop.

Exemplo de exerc�cio n�o aceito:

soma = vet[0]+vet[1]+vet[2]+vet[3]+vet[4];

 

Ap�s a soma e a multiplica��o serem feitas, duas mensagens dever�o ser emitidas:

    Deve-se informar o valor da soma e informar se a soma � positiva ou negativa.
    Deve-se informar o valor da subtra��o e informar se a soma � positiva ou negativa.
    Deve-se informar o valor da multiplica��o e informar se a mesma � positiva ou negativa
    Deve-se informar o valor da divis�o e informar se a mesma � positiva ou negativa
    Ao final do programa, verificar se o usu�rio deseja continuar e inserir novos valores. A mensagem �Deseja preencher um novo vetor?� e o usu�rio informar� a op��o �S ou s�, caso queira continuar. Qualquer outra op��o, o programa dever� ser finalizado.
    O desenvolvedor dever� criar um procedimento para informar se o n�mero � positivo ou negativo.

*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
using namespace std;
int main(){
	char refas;
	do{
	setlocale(LC_ALL,"Portuguese"); //Defini��o de idioma
	float vetor, soma, sub, mult=1, div=1;
	int rep;
		for (rep=0;rep<10;rep++)
		{
			system("color F2");
			printf("Valor do vetor[%d]:..........................",rep);
			scanf("%f",&vetor);
			printf("\a");
			soma=vetor+soma;
			sub=vetor-sub;
			mult=vetor*mult;
			div=(div/vetor);
		}
		printf("\a");
		system("pause");
		system("cls");
		printf("\nSoma..................................... %2.f \n\n",soma);
		if(soma>=0){printf("Soma � positivo \n\n");}else{printf("Soma � negativo \n\n");}
		printf("\nSubtra��o................................ %2.f \n\n",sub);
		if(sub>=0){printf("Subtra��o � positivo \n\n");}else{printf("Subtra��o � negativo \n\n");}
 		printf("\nMultiplica��o............................ %2.f \n\n",mult);
 		if(mult>=0){printf("Multiplica��o � positivo\n\n");}else{printf("Multiplica��o � negativo \n\n");}
		printf("\nDivi��o.................................. %2.f \n\n",div);
		if(div>=0){printf("Divi��o � positivo\n\n");}else{printf("Divi��o � negativo \n\n");}
		system("time/t");
		system("date/t");
		printf("\n\n\n\n\n Deseja Repetir(S/N)....................");
		scanf("%s",&refas);
		system("cls");
	}while(refas=='S'||refas=='s');
} /* Desenvolvedor Bruno Carvlho */
