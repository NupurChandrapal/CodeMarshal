#include<stdio.h>
int main()
{
    int i,j,n,k,l,t;
    scanf("%d",&t);
    for(l=1;l<=t;l++){
    scanf("%d",&n);
    for(k=1;k<=4;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=9;j++)
                if(k!=1 && k!=4 && j!=1 && j!=9){
                    printf(" ");
            }
            else
                {
                printf("*");
            }
            if(i<n)
            printf(" ");
        }
        printf("\n");
    }
    }
        return 0;
}
