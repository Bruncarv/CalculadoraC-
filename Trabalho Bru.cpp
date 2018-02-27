/* Atividade Prática II

Desenvolver um programa que preencha um vetor de 10 posições com números (positivos ou negativos) informados pelo usuário (utilize um loop para requisitar os valores aos estudantes)

Após isso, utilizando um loop, efetue a soma, subtração, multiplicação e divisão destes 10 números (índices do array).

OBS: não serão aceitos exercícios em que a soma é feita sem a utilização do loop.

Exemplo de exercício não aceito:

soma = vet[0]+vet[1]+vet[2]+vet[3]+vet[4];

 

Após a soma e a multiplicação serem feitas, duas mensagens deverão ser emitidas:

    Deve-se informar o valor da soma e informar se a soma é positiva ou negativa.
    Deve-se informar o valor da subtração e informar se a soma é positiva ou negativa.
    Deve-se informar o valor da multiplicação e informar se a mesma é positiva ou negativa
    Deve-se informar o valor da divisão e informar se a mesma é positiva ou negativa
    Ao final do programa, verificar se o usuário deseja continuar e inserir novos valores. A mensagem “Deseja preencher um novo vetor?” e o usuário informará a opção “S ou s”, caso queira continuar. Qualquer outra opção, o programa deverá ser finalizado.
    O desenvolvedor deverá criar um procedimento para informar se o número é positivo ou negativo.

*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
using namespace std;
int main(){
	char refas;
	do{
	setlocale(LC_ALL,"Portuguese"); //Definição de idioma
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
		if(soma>=0){printf("Soma é positivo \n\n");}else{printf("Soma é negativo \n\n");}
		printf("\nSubtração................................ %2.f \n\n",sub);
		if(sub>=0){printf("Subtração é positivo \n\n");}else{printf("Subtração é negativo \n\n");}
 		printf("\nMultiplicação............................ %2.f \n\n",mult);
 		if(mult>=0){printf("Multiplicação é positivo\n\n");}else{printf("Multiplicação é negativo \n\n");}
		printf("\nDivição.................................. %2.f \n\n",div);
		if(div>=0){printf("Divição é positivo\n\n");}else{printf("Divição é negativo \n\n");}
		system("time/t");
		system("date/t");
		printf("\n\n\n\n\n Deseja Repetir(S/N)....................");
		scanf("%s",&refas);
		system("cls");
	}while(refas=='S'||refas=='s');
} /* Desenvolvedor Bruno Carvalho */
