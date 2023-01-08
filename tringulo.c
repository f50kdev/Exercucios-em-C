#include <stdio.h>
#include <stdlib.h>

int main(){
      float base , altura , area;

      printf("\n Insira o valor da  base \n ");
      scanf("%f" , &base);

      printf("\n Insira o valor altura \n\n ");
      scanf("%f" , &altura);

      area = base * altura;
      printf("\n o valor do traingulo  e de : \n\n  %f  : " , area);

      printf("\n O valor da area e de : %.2f " , area);




    return 0;
}