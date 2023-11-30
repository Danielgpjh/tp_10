#include <stdio.h>
#include <stdlib.h>
void funcion(int negativo[12][19]){
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<19;j++){
			printf("Ingrese un numero para I:%d y j:%d ",i+1,j+1);
			scanf("%d",&negativo[i][j]);
			if(negativo[i][j]<0){negativo[i][j]=0;}
		}
	}
}
	
void ns(int negativo[12][19]){
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<19;j++){printf("%d  ",negativo[i][j]);
		}printf("\n");
	}
}

int main(){
	int negativo[12][19];
	funcion(negativo);
	ns(negativo);
	return 0;
}