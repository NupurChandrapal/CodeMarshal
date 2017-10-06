#include <stdio.h>


int max(int a, int b)
{
    return (a>b)?a:b;
}

int knapsack(int W,int wt[],int val[],int n)
{
    int i,w;
    int K[n+1][W+1];

    printf("\nCalculation Table \n");


    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            else
                K[i][w] = K[i-1][w];


            printf("%d\t",K[i][w]);
        }
        printf("\n");
    }
    return K[n][W];
}

int main()
{

    int n,i,j,k;

    int val[10];
    int wt[10];
    int W;


    printf("Enter the number of items :: \n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the weight and value of item %d ::  ",i+1);
        scanf("%d %d",&wt[i],&val[i]);
    }


    printf("Enter the knapsack weight :\n");
    scanf("%d",&W);

    printf("\nValue = %d", knapsack(W, wt, val, n));
    return 0;
}
