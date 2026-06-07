#include <stdio.h>
#include <stdlib.h>

int main()
{
  char sexo;
 int idade;
 float peso, altura;
 printf(" idade peso altura e   sexo(f F ,m ou M):\n");
 scanf("%d%f%f %c",&idade,&peso,&altura,&sexo);
 printf(" \n idade: %d\n peso: %.1f \n altura:%.2f \nsexo: %c",idade,peso,altura,sexo);
    return 0;
}
