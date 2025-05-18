#include<stdio.h>

int main(void){
	float peso=0.0F, altura=0.0F;
	
	printf("Ingrese su peso en Kg: ");
	scanf("%f", &peso);
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	printf("\nSu indice de masa corporal es: %.2f", peso / (altura * altura));
	printf("\n\nIndice | Condicion\n-------------------\n"
			"<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9"
			" | Sobrepeso\n>=30 | Obesidad");
	
	return 0;
}
