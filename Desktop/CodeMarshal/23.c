#include<stdio.h>
int main()
{
    int i,j,k,t,n,ara[51][51];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            for(k=0;k<n;k++)
                scanf("%d",&ara[j][k]);
        }
        for(j=n-1;j>=n-1;j--)
            for(k=n-1;k>=n-1;k--)
            printf("%d",ara[j][k]);
        for(j=n-1;j>=n-1;j--)
            for(k=n-2;k>=0;k--)
                printf(" %d",ara[j][k]);
        for(j=n-2;j>=0;j--){
            for(k=n-1;k>=0;k--)
                printf(" %d",ara[j][k]);
            }
        printf("\n");
    }
        return 0;
}
