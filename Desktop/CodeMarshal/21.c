#include<stdio.h>
int main()
{
    int i,j,k,t,n,r[1005];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&r[j]);
            }
            printf("%d",r[n-1]);
            for(j=n-2;j>=0;j--){
                printf(" %d",r[j]);
            }
        printf("\n");
    }

    return 0;
}
