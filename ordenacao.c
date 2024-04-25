#include <stdio.h>

void main(){
    int nElementos;
    int i = 0, j = 0;
    scanf("%d", &nElementos);
    int lista[nElementos];
    for (i = 0; i < nElementos; i++){
        int resposta;
        scanf("%d", &resposta);
        lista[i] = resposta;
    }

    for (i = 0; i < nElementos - 1; i++){
    	for (j = 1; j < nElementos - i; j++){
    		int temp = 0;
    		if (lista[j] < lista[j-1]){
				temp = lista[j];
				lista[j] = lista[j-1];
				lista[j-1] = temp;
			}
		}
	}

    for (i = 0; i < nElementos; i++){
        printf("%d ", lista[i]);
    }
}
