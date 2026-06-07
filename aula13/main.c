#include <stdio.h>
#include <stdlib.h>

int main()
{
 char a,b;
 printf("digite 2 letras: ");
 scanf("%c %c",&a, &b);
 // espaço entre %c é um comando para o computador desconsiderar o entre espaço ou um tab
 printf("primeira letra: %c\n segunda letra: %c\n",a,b);
    return 0;
}
