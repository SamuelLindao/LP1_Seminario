#include <stdio.h>
#include <math.h>

int main() {

  float entorig = 0, entsecn = 0;
  float res = 0;
  char oper = 0, cont = 0;

  printf("Bem-vindo(a). Você já pode começar a fazer seus cálculos. Digite 'A' ou 'a' quando quiser encerrar o programa.\n\n");
  printf("Use 'R' como operador da Função de Raiz Quadrada e '^' como operador para potenciação\n\n");
  scanf("%f", &entorig);

  while(cont == 0){
    scanf("\n%c", &oper);

    switch(oper){
      case '*':
        scanf("\n%f", &entsecn);
        res = (entorig * entsecn);
      break;
      case '+':
        scanf("\n%f", &entsecn);
        res = (entorig + entsecn);
      break;
      case '/':
        scanf("\n%f", &entsecn);
        if (entsecn != 0) {
          res = (entorig / entsecn);
        }else printf("Erro: Divisão por zero.\n"); 
      break;
      case '-':
        scanf("\n%f", &entsecn);
        res = (entorig - entsecn);
      break;
      case 'R':
        res = sqrt(entorig);
      break;
      case '^':
        scanf("\n%f", &entsecn);
        res = pow(entorig,entsecn);
      break;
      case 'A':
        return 0;
      break;
      case 'a':
        return 0;
      break;
    }

    printf("= %.2f\n", res);
    entorig = res;
  }



return 0;
}
