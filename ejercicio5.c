#include <stdio.h>

int ingresar(int unidades[15]){
	int acum;
	for(int i=0;i<20;i++){
		printf("Empleado %d: \n", i+1);
		for(int j=0;j<15;j++){
			printf("Ingrese las unidades del dia %d: ", j+1);
			scanf("%d", &unidades[j]);
			while(unidades[j]<0){
				printf("Ingrese unidades correctas:");
				scanf("%d", &unidades[j]);
			}
			acum+=unidades[j];
		}
	}
}
	
	void calculos(int acum){
		int alt=0, alto=0, dia;
		float prome;
		dia=acum;
		for(int i=0;i<20;i++){
			prome=dia/15;
			if(prome>alt){
				alt=prome;
				alto=i+1;
			}
			dia=0;
		}
		printf("Cantidad de ventas totales: %d \n", acum);
		printf("Empleado con mas ventas al dia: %d \n", alto);
	}
		
		int main() {
			int unidades[15], acum;
			acum=ingresar(unidades);
			calculos(acum);
			return 0;
		}
		