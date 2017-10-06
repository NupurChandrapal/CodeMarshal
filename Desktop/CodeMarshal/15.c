#include<stdio.h>
int main()
{
    int count,n,i,j,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        count=0;
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            if(i%3==0){
                count++;
            }
        }
        printf("Case %d: %d\n",j,count);
    }
    return 0;
}
