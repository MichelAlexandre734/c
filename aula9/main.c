#include <stdio.h>
#include <stdlib.h>
/*

aula8
lendo caracteres
funçao fgetc();
*/


int main()
{
 char letra;
 printf("digite um caracter: ");
 letra=fgetc(stdin);
 printf("caracter lido: %c\n",letra);

    return 0;
}
