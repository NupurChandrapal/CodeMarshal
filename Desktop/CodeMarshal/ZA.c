#include<stdio.h>
int main()
{
    int x,y,m,i,d,j;
    scanf("%d",&d);
    for(j=1;j<=d;j++){
    scanf("%d%d",&x,&y);
    if(x>y)
         m=y;
    else
         m=x;

    for(i=m;i>=1;i--){
         if(x%i==0 && y%i==0){
             printf("%d\n",i) ;
             break;
         }
      }
    }
    return 0;
}
