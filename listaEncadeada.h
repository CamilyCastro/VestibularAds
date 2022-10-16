#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED
#endif // LISTAENCADEADA_H_INCLUDED

#define qtde 5
#define VAGAS 1


struct elemento{
    int matricula;
    char nome[40];
    float n1;
};

typedef struct tipoNo *Lista; //defino tipo
							 //Lista == ponteiro para
							 //estrutura com dois campos

Lista* criaLista();
int tamLista(Lista* inicio);
int listaCheia(Lista* inicio);
int listaVazia(Lista* inicio);
int insereFinal(Lista* inicio, struct elemento aluno);
int insereOrdenada(Lista* inicio, struct elemento aluno);

void imprimeLista(Lista* inicio);
void imprimeListaAds(Lista* ads);


int removeInicio(Lista* inicio);
void apagaLista(Lista* inicio);

int consultaMatricula(Lista* inicio, int mat, struct elemento *aluno);
int consultaPosicao(Lista* inicio, int pos, struct elemento *aluno);

