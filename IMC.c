#include <stdio.h>

int main ()
{
    float peso, altura, imc;
    printf("\nPara o calculo do IMC, vou precisar do seu peso e altura.\n");
    printf("\nQual é a seu peso em quilos?\n");
    scanf("%f", &peso);
    printf("\nQual é sua altura em metros?\n");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    if (imc <20)
        printf("Você está magra, abaixo do peso ideal. Com indice IMC de %.2f", imc);
    else if (imc <26)
        printf("Você está com peso ideal. Com indice IMC de %.2f", imc);
    else if (imc <31)
        printf("Você está acima do peso ideal. Com indice IMC de %.2f", imc);
    else
        printf("Você está obesa, muito acima do peso ideal. Com indice IMC de %.2f", imc);
    
    return 0;
}