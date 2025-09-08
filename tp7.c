//Lin al repositorio: https://github.com/MisilJr/Informatica2025/tree/main
#include <stdio.h>

#define TAM 5

int main(void){
	int codigos[TAM];
	float precios[TAM];
	int codigo_min=0, codigo_max=0;
	float precio_min=0.0F, precio_max=0.0F;
	
	printf("Ingrese %i productos, se solicitara el codigo y el precio:\n", TAM);
	for(int i=0 ; i < TAM; i++){
		 do{
			printf("Ingrese el codigo de barras (1-999999999) del producto %i: ", i);
			scanf("%i", &codigos[i]);
			if(codigos[i] < 1 && codigos[i] > 999999999){
				printf("Error: Valor invalido\n");
			}
		 }while(codigos[i] < 1 && codigos[i] > 999999999);
		 
		 do{
			printf("Ingrese el precio (positivo) del producto %i: ", i);
			scanf("%f", &precios[i]);
			if(precios[i] < 0.0F){
				printf("Error: Valor invalido\n");
			}
		 }while(precios[i] < 0.0F);
		 
		 if(precios[i] < precio_min || i==0){
			 precio_min=precios[i];
			 codigo_min=codigos[i];
		 }
		 
		 if(precios[i] > precio_max){
			 precio_max=precios[i];
			 codigo_max=codigos[i];
		 }
	 }
	 
	 printf("Codigo\tPrecios\n");
	 for(int i=0; i < TAM; i++){
		 printf("%i\t%f\n", codigos[i], precios[i]);
	 }
	printf("Mas caro [%i]: %f\n", codigo_max, precio_max);
	printf("Mas barato [%i]: %f\n", codigo_min, precio_min);
	
	return 0;
}
