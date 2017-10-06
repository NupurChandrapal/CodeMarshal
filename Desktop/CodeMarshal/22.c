#include <stdio.h>
int main()
{
    int row,t,i, col, n, matrix[49][49];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d", &n);
    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            scanf("%d", &matrix[row][col]);
        }
    }
    row = 1;
    printf("Case %d:",i);
    while(n > 0){
        for(col = row; col <= n; col++){
            printf(" %d",matrix[row][col]);
        }
        for(col = row+1; col <= n; col++){
            printf(" %d", matrix[col][n]);
        }
        for(col = n-1; col > row-1; col--){
            printf(" %d", matrix[n][col]);
        }
        for(col = n-1; col > row; col--){
            printf(" %d", matrix[col][row]);
        }
        row++;
        n--;
    }
    printf("\n");
    }
    return 0;
}
