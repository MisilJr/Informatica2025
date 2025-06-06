#include<stdio.h>

int main(void){
	float peso=0.0F, altura=0.0F, imc=0.0F;
	
	printf("Ingrese su peso en Kg: ");
	scanf("%f", &peso);
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	imc=peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f", imc);
	printf("\n\nIndice | Condicion\n-------------------\n"
			"<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9"
			" | Sobrepeso\n>=30 | Obesidad\n\n");
			
	if(imc >= 30.0F){
		printf("Usted esta en la condicion: Obesidad.");
	}else if(imc < 30.0F && imc >= 25.0F){
		printf("Usted esta en la condicion: Sobrepeso.");
	}else if(imc < 25.0F && imc >= 18.5F){
		printf("Usted esta en la condicion: Normal");
	}else if(imc < 18.5){
		printf("Usted esta en la condicion: Bajo peso");
	}
	
	return 0;
}
