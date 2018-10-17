#include <stdio.h>
#include <stdlib.h>
#include "ordernar.h"
#include "mostrar.h"
#define MAX 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int elementos;
	int arreglo[MAX];
	int i=0;
	int temp;
	
	printf("Ingresa el numero de elementos del arreglo");
	scanf("%d",&elementos);
	
	for(i =0; i<elementos; i++){
		printf("Numero %d :", i +1);
		scanf("%d",&arreglo[i]);
		
	}
	ordernar(arreglo, elementos);
	
	mostrar(arreglo, elementos);

}
