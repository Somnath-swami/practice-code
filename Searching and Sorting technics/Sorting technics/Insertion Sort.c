#include <stdio.h>

int InsertionSort(int a[], int n)
{
    
    int key, j;
    for(int i=1;i<n;i++)
    {
            key = a[i];
            j = i-1;
        
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
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
    printf("Enter elements in array \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    InsertionSort(a, n);
    
    printf("Sorted array ");
    PrintArray(a,n);
    
    return 0;
}


OUTPUT : Enter the size of array = 5
         Enter elements in array 
         12
         11
         13
         5
         6
         Sorted array 5 6 11 12 13 

Time Complexity: O(n^2) 
