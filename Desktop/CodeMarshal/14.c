#include<stdio.h>
int main()
{
    int a,b,i,t,res=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        res=a+b;
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
