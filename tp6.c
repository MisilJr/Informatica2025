#include<stdio.h>
#include<math.h>

#define PI 3.141592F

float calcularAreaRectangulo(float, float);
float calcularPerimetroRectangulo(float, float);
float calcularDiagonalRectangulo(float, float);
float calcularAreaCirculo(float);
float calcularPerimetroCirculo(float);
void imprimirResultados(float, float);

int main(void){
    int opcion_figura = 0;
    float longitud = 0.0F, altura = 0.0F, radio = 0.0F;

    do{
        printf("\nIngrese la figura que desea calcular(1:Rectangulo, 2:Circulo): ");
        scanf("%i", &opcion_figura);
        if(opcion_figura < 1 || opcion_figura > 2){
            printf("Opcion no valida.\n");
        }
    }while(opcion_figura < 1 || opcion_figura > 2);
    
    if(opcion_figura == 1){
        printf("Opcion de rectangulo seleccionada.\n");

        do{
            printf("\nIngrese la longitud del rectangulo: ");
            scanf("%f", &longitud);
            if(longitud < 0){
                printf("Valor no valido.\n");
            }
        }while(longitud < 0);

        do{
            printf("\nIngrese la altura del rectangulo: ");
            scanf("%f", &altura);
            if(altura < 0){
                printf("Valor no valido.\n");
            }
        }while(altura < 0);

        imprimirResultados(
            calcularPerimetroRectangulo(longitud, altura),
            calcularAreaRectangulo(longitud, altura)
        );

        printf("La diagonal de la figura es: %.2f\n", calcularDiagonalRectangulo(longitud, altura));
    }
    else if(opcion_figura == 2){
        printf("\nOpcion de circulo seleccionada.");

        do{
            printf("\nIngrese el radio del circulo: ");
            scanf("%f", &radio);
            if(radio < 0){
                printf("Valor no valido.\n");
            }
        }while(radio < 0);

        imprimirResultados(
            calcularPerimetroCirculo(radio),
            calcularAreaCirculo(radio)
        );
    }

    return 0;
}

float calcularAreaRectangulo(float longitud, float altura){
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura){
    return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura){
    return hypotf(longitud, altura);
}

float calcularAreaCirculo(float radio){
    return radio * radio * PI;
}

float calcularPerimetroCirculo(float radio){
    return 2 * radio * PI;
}

void imprimirResultados(float area, float perimetro){
    printf("\nEl perimetro de la figura es: %.2f\nEl area de la figura es: %.2f\n"
            , perimetro, area);
}