#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int C, i, size, Arr[20];
printf("\n Array containing 20 Random Numbers\n");
for(i=0;i<20;i++)
{
Arr[i]=rand();
printf("%d\n",Arr[i]);
}
C=Arr[0];
for(i=0;i<20;i++)
{
    if(C>=Arr[i])
    {
        printf("C=%d\n",C);
    }
    else
    {
        C=Arr[i];
        printf("C=%d\n",C);
    }
}
return 0;
}



