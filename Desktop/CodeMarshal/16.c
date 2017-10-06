#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        if(b%3==0){
            printf("%d is divisible by 3\n",b);
            if(b%7==0){
                printf("%d is also divisible by 7\n",b);
            }
        }
        else{
            printf("%d is not divisible by 3\n",b);
        }
    }
    return 0;
}
