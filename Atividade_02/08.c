#include <stdio.h>
int main(){
    float a, b, c; int i;
    printf("Menu de op��es:\n1.Somar dois n�meros.\n2.Subtrair dois n�meros\n3.Multiplicar dois n�meros\n4.Dividir dois n�meros\n5.Raiz quadrada de um n�mero\nDigite a op��o desejada."); scanf("%d", i);
    if(i == 1){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a + b;
         printf("%f", c);
    }
    else if(i == 2){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a - b;
         printf("%f", c);
    }
    else if(i == 3){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a*b;
         printf("%f", c);
    }
    else if(i == 4){
         printf("Digite os operandos: "); scanf("%f", a); scanf("%f", b);
         c = a/b;
         printf("%f", c);
    }
    else if(i == 5){
         printf("Digite o operando: "); scanf("%f", a);
         c = sqrt(a);
         printf("%f", c);
    }
    return 0;
}
