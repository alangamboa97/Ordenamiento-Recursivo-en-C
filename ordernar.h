#include <stdio.h>
#include <stdlib.h>

void ordernar(int arreglo[], int elementos){
	int aux;
if(elementos>1){
	for (int i =0; i< elementos; i++){
		if(arreglo[i]>arreglo[i+1]){
			aux= arreglo[i];
			arreglo[i] = arreglo[i+1];
			arreglo[i+1] = aux;
			
			
		}
		ordernar(arreglo, elementos-1);
	}
}

}


