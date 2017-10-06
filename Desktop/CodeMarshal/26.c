#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,r,a,b,res=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf%lf%lf",&r,&a,&b,&x,&y);
        res=sqrt((a-x)*(a-x)+(b-y)*(b-y));
        if(res<r){
            printf("Case %d: YES\n",i);
        }
        else{
            printf("Case %d: NO\n",i);
        }
    }

    return 0;
}
