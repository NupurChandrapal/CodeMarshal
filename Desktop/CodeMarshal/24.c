#include<stdio.h>
int main()
{
    int i,j,k,a,b,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        long long res1=0,res2=1,res3=1,res=0;
        scanf("%d%d",&a,&b);
        for(j=1;j<=a;j++){
                res2=res2*j;
        }
        res1=a-b;
        for(k=1;k<=res1;k++){
            res3=res3*k;
        }
        res=res2/res3;
        printf("Case %d: %lli\n",i,res);
    }
    return 0;
}
