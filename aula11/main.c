#include <stdio.h>
#include <stdlib.h>

int main()
{
 char sexo;
 int idade;
 float peso, altura;
 printf("digite sexo(f F ,m ou M) idade peso e altura:\n");
 scanf("%c%d%f%f",&sexo,&idade,&peso,&altura);
 printf("sexo: %c \n idade: %d\n peso: %.1f \n altura:%.2f",sexo,idade,peso,altura);
    return 0;
}
