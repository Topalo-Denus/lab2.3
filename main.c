#include <stdio.h>
#include <math.h>
int main(void) {
int x,y,z;
float f;
printf("\n edit x=");
scanf("%d",&x);
printf("\n edit y=");
scanf("%d",&y);
printf("\n edit z=");
scanf("%d",&z);

f=(pow(x,2)+pow(z,2))/sqrt(x+y)+pow(x+y+z,1./3);
printf("\t f=%f",f);
return 0;
}