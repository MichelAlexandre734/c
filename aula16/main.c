#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=1.0;
     printf("tamanho de um float na memoria:%dbytes\n",sizeof x);
    printf("tamanho em memoria de  um int : %d bytes\n",sizeof(int));
    // 4  x 8 = 32 bits
    return 0;
}
