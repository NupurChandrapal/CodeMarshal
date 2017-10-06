#include<stdio.h>
 void SelectionSort(int a[],int n)
 {
     int i,j;
     for(j=1;j<n;j++){
        int smallest = j;
        for(i=j+1;i<n;i++)
        {
            if(a[i]<a[j])
            {
                smallest=i;
                int temp= a[smallest];
                a[smallest]=a[j];
                a[j]=temp;

            }
        }
     }

     printf("\nsorted array list: \n");
     for(i=1;i<=n;i++)
     {
         printf("\nIndex %d= %d",i,a[i]);
     }
 }


 /******** Main Function **********/

 void main()
 {
      /******* Initialization ********/

    int i, a[100],n;
    printf("Enter the length array: ");
    scanf("%d",&n);



    /******* Input ********/

    printf("Enter the array elements: \n");

    for(i=1;i<=n;i++)
    {
        printf("\nIndex %d: ",i);
        scanf("%d",&a[i]);

    }

    /****** Function calling *******/

    SelectionSort(a,n);

 }
