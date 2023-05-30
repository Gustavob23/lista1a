#include <stdio.h>

int main() {
  float  num1, num2, num3, num4, temp;
  
  // Lendo os 4 valores reais
  printf("Digite 4 numeros reais: ");
  scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
  
  // Ordenando os números com bubblesort
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (num1 > num[j]) {
        temp = num1;
        num1 = num[j];
        num[j] = temp;
      }
    }
  }
  
  // Imprimindo a lista ordenada
  printf("%.2f, %.2f, %.2f, %.2f", num1, num2, num3, num4);
  
  return 0;
}


