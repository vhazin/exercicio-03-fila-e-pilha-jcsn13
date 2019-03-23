#include <stdlib.h>
#include <stdio.h>

typedef struct pessoa{
	int posicao;
	int identificador;
} tpessoa;

int main(){
	int entrada,saida,cont = 0,arm;
	tpessoa *p;
	scanf("%d",&entrada);
	int lent = entrada;
	p = (struct pessoa*)malloc(entrada*sizeof(struct pessoa));

	while(entrada != 0){
		scanf("%d",&p[cont].identificador);
		cont++;
		entrada--;
	}

	scanf("%d",&saida);

	while(saida != 0){
		scanf("%d",&arm);
		for(int i = 0;i < lent;i++){
			if(arm == p[i].identificador){
				p[i].identificador = 0;
			}
		}
		saida--;
	}

	for (int i = 0; i < lent; i++){
		if(p[i].identificador != 0){
		printf("%d ",p[i].identificador);
		}
	}
	printf("\n");
	return 0;
}