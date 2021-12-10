#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e=0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&d);
    int k=abs(d-(a+b+c));
    if(k<=c)
     e+=k*5;
    else if(k<=c+b)
    {
     e+=(c*5);
     e+=(k-c)*2;
    }
    else if(k<=(a+b+c))
    {
        a+=c*5;
        e+=(b*2);
        e+=((k-(b+c))*1);
    }
    printf("%d",e);
     

}
