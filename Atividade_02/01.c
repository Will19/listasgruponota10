#include <stdio.h>
float conc(float a, float b, float c){
      float m;
      m = (a*2 + b*3 + c*5)/10;
      if(m >= 8){
           printf("A\n");
           }
      else if(m < 8 && m >= 7){
           printf("B\n");
           }
      else if(m < 7 && m >= 6){
           printf("C\n");
           }
      else if(m < 6 && m >= 5){
           printf("D\n");
           }
      else{
           printf("E\n");
           }
}
int main(){
    float a, b, c;
    printf("Digite a nota do trabalho de lab.: "); scanf("%f", &a);
    printf("Digite a nota da avalia��o semestral: "); scanf("%f", &b);
    printf("Digite a nota do exame final: "); scanf("%f", &c);
    printf("%f", conc(a, b, c));
    return 0;
}
