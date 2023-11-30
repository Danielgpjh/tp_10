#include <stdio.h>

void Mostrar(int *fila, int *colum){
	int i;
	printf("Filas:\n");
	for(i=0;i<10;i++){
		printf("%d\t",fila[i]);
	}
	printf("\nColumnas:\n");
	for(i=0;i<10;i++){
		printf("%d\t",colum[i]);
	}
}
	void Carga(int matriz[10][10],int *colum,int *fila) {
		int i,j;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				printf("Ingrese un numero %d %d: ",i+1,j+1);
				scanf("%d",& matriz[i][j]);
				fila[i]+=matriz[i][j];
				colum[j]+=matriz[i][j];
			}
		}
	}
	
	int main() {
		int matriz[10][10]={0},colum[10]={0},fila[10]={0};
		Carga(matriz,colum,fila);
		Mostrar(fila,colum);
		return 0;
	}
