#include <stdio.h>
int main(){
    float num1,num2,resultado;
    char operador;
    
    printf("Digite uma operacao(+,-,*,/): ");
    scanf("%c",&operador);
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    switch(operador){
        case '+':
        resultado=num1+num2;
        printf("resultado: %.2f\n",resultado);
        break;
        case '-':
        resultado=num1-num2;
        printf("resultado: %.2f\n",resultado);
        break;
        case '*':
        resultado=num1*num2;
        printf("resultado: %.2f\n",resultado);
        break;
        case '/':
        if(num2!=0){
            resultado=num1/num2;
            printf("resultado: %.2f\n",resultado);
        }
        else
        printf("ERRO: divisao por zero!\n");
        break;
        default:
        ("operador invalido!\n");
    }
    return 0;

}