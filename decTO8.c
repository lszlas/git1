#include <stdio.h>
main()
{
int r,licz,sum;
long oktagonalny,decymalny,temp;

 licz=0;
 sum=0;
 decymalny=0;
printf("NIE MA TAKIEGO BICIA!! by Wilq");
scanf("%ld",&decymalny);
temp=decymalny;
while(temp>0)
{
r=temp%8;
sum=sum*10+r;
temp=temp/8;
licz++;
}
oktagonalny=0;
while(licz>0)
{
r=sum%10;
oktagonalny=oktagonalny*10+r;
sum=sum/10;
licz--;
}
printf("Osemkowy odpowiednik liczby dziesiatkowej %ld to %ld\n\n",decymalny,oktagonalny);

}
