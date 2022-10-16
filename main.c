#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

int main(){
    struct elemento Aluno;

    Lista *inicio = criaLista();
    Lista *ads = criaLista();

    int opcao, mat, pos;

    do
	{
    	printf("Menu \n\n");

    	printf("1. Realizar inscricao:\n");
		printf("2. Imprimir inscritos:\n");
    	printf("3. Imprimir aprovados: \n");
    	printf("4. Consultar por nmr de inscricao: \n");
		printf("0. Sair do programa \n");

		scanf("%d", &opcao);

    	switch (opcao)
		{
   			case (1):
   			     printf("\nMatricula:\n");
                 scanf("%d", &Aluno.matricula);
                 printf("\nNome:\n");
                 scanf("%s", &Aluno.nome);
                 printf("\nNota:\n");
                 scanf("%f", &Aluno.n1);

    		     insereFinal(inicio, Aluno);
    		     insereOrdenada(ads, Aluno);
     		break;
     		case (2):
     		     imprimeLista(inicio);
     		break;
     		case (3):
     		     imprimeListaAds(ads);
     		break;
     		case (4):
                 /*printf("\nMatricula: \n");
                 scanf("%d", &mat);

                 consultaMatricula(inicio, mat, &Aluno);

                 printf("\nNome: %s\n", Aluno.nome);
                 printf("\nMatricula: %d\n", Aluno.matricula);*/
     		break;
     		case (0):
     		     printf("\n\n fim de programa.");
     		break;
  			default:
     			printf("\n\n Digite uma opcao de 1 a 3");
   		}

   	} while (opcao);

    apagaLista(inicio);

}
