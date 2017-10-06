#include<stdio.h>
int main()
{
    int i,s=1,t,j,l,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        s=n-1;
        for(j=1;j<=n;j++){
            for(l=1;l<=s;l++)
                printf(" ");
                s--;
            for(l=1;l<=2*j-1;l++)
                printf("*");
            printf("\n");
        }
        s=1;
        for(j=1;j<=n-1;j++){
            for(l=1;l<=s;l++)
                printf(" ");
            s++;
            for(l=1;l<=2*(n-j)-1;l++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
