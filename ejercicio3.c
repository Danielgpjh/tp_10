#include <stdio.h>
#include <stdlib.h>
void Ingresar(float clientes[5][6]){
	int i,j;
	for(i=0;i<5;i++){
		printf("Cliente N°%d\n",i+1);
		for(j=0;j<6;j++){
			if(j==0){
				clientes[i][j]=i+1;
			}else{
				printf("Ingrese la compra en el dia %d: ",j);
				scanf("%f",&clientes[i][j]);
			}
		}
	}
}
void Ventas(float clientes[5][6], float *combo){
	int i,j;
	for(i=0;i<5;i++){
		for(j=1;j<6;j++){
			if(combo[0]<clientes[i][j]){
				combo[0]=clientes[i][j];
				combo[1]=clientes[i][0];
				combo[2]=j;
			}
		}
	}
}
int main() {
	float clientes[5][6]={0},combo[3]={0};
	Ingresar(clientes);
	Ventas(clientes,combo);
	printf("La mayor venta fue del cliente en el dia %.2f %.2f %.0f",combo[0],combo[1],combo[2]);
	return 0;
}