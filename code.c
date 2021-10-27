#include <reg51.h>
void main(void)
{
char mynum[]={+1,-1,+2,-2,+3,-3,+4,-4};
unsigned char z;
unsigned int i,j;
for (z=0;z<=8;z++)
{
for(i=0;i<=2550;i++)
for(j=0;j<=255;j++)
{}
P1=mynum[z];
}
}
