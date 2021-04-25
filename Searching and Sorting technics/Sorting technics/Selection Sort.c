#include<stdio.h>

int swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int SelectionSort(int a[], int n)
{
    int i, j, min_ind;
    for(i=0;i<n-1;i++)
    {
        min_ind = i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min_ind])
        
        min_ind = j;
        
    swap(&a[min_ind], &a[i]);
    }
}

int PrintArray(int a[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d elements in array \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    SelectionSort(a, n);
    
    PrintArray(a, n);
    
    return 0;
}



OUTPUT : Enter the size of array = 5
         Enter 5 elements in array 
         64
         25
         12
         11
         22
         11 12 22 25 64 

//Time Complexity: O(n^2) 

