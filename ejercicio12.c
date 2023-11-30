#include <stdio.h>

void ingresar(float ventas[4][7]) {
	for (int i=0;i<4;i++) {
		printf("Semana %d:\n", i + 1);
		for (int j=0;j<7;j++) {
			printf("Ingrese las ventas del dia %d: ", j + 1);
			scanf("%f",&ventas[i][j]);
		}
	}
}

void Mostrar(float *promeVenta) {
	for (int i=0;i<4;i++){
		printf("Semana %d: %.2f\n",i+1,promeVenta[i]);
	}
}

int main() {
	float ventas[4][7],totalV[4]={0},promeVenta[4]={0},maxV=0;
	int mayorVenta =1,i,j;
	
	ingresar(ventas);
	
	for (i=0;i<4;i++) {
		for (j=0;j<7;j++) {
			totalV[i]+= ventas[i][j];
		}
		promeVenta[i]=totalV[i]/7;
		if (totalV[i]>maxV) {
			maxV=totalV[i];
			mayorVenta =i+1;
		}
	}
	
	printf(" Total de ventas por Semana:\n");
	for ( i=0; i < 4; i++) {
		printf("Semana %d: %.2f\n",i+1,totalV[i]);
	}
	
	printf("Promedio de ventas por Semana:\n");
	Mostrar(promeVenta);
	
	printf("Semana de mayor venta: Semana %d\n",mayorVenta );
	
	return 0;
}
