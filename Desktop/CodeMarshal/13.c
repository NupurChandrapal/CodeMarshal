#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a<=1000 && b<=1000 && a<=b){
    for(i=a;i<=b;i++){
        printf("%d",i);
            if(i!=b)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
