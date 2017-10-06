#include<stdio.h>
int main()
{
    int D,A,S,Y,W,C,X;
    scanf("%d",&W);
    for(D=1;D<=W;D++){
        if(D!=1){
            printf("\n");
        }
        scanf("%d",&X);
        C=X;
        for(A=1;A<=X;A++){
            for(S=1;S<C;S++){
                printf(" ");
            }
            C--;
            for(Y=1;Y<=2*A-1;Y++){
                printf("*");
            }
            printf("\n");
        }
   }
   return 0;
}
