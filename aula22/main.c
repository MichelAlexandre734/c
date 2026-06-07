#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x=3.1415;
 long double y=3.14155896587458962548;
 printf("valor de y %.10Lf\n",y);
 __mingw_printf("valor de y %.15Lf\n",y);

   printf("um long double precisa de %d bytes de memoria \n ",sizeof y);

   // 8 * 8 =64bits
    return 0;
}
