#include <stdio.h>

int search(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        return i;
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    
    int a[n], i, target, result;
    printf("Enter elements in array \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf("Enter the element to search = ");
    scanf("%d",&target);
    
    result = search(a,n,target);
    (result == -1)
    ? printf("Element not found in array")
    : printf("Element found in array = %d",result);

    return 0;
}


OUTPUT : Enter the size of array = 10
         Enter elements in array 
         0
         1
         2
         3
         4
         5
         6
         7
         8
         9
         Enter the element to search = 5
         Element found in array = 5


    //Time complexity O(n)

