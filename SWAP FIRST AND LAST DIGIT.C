#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[100],j=0;
    scanf("%d",&n);
    while(n!=0){
        a[j++]=n%10;
        n/=10;
    }
    int s=a[0];
    for(int i=j-2;i>=0;i--)
    {
        s=(s*10)+a[i];
    }
    s=(s*10)+a[j-1];
    printf("%d",s);

}
