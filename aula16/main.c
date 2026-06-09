#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=1.0;
    printf("tamanho de um float  na memoria: %dbytes\n",sizeof x);
   printf("tamanho em memoria de um int:%dbytes\n",sizeof(int));
   // 4 x 8=32bits
    return 0;
}
