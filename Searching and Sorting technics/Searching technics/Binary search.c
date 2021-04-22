 #include <stdio.h>

int BinarySearch(int a[], int n, int target)
{
    int low = 0;
    int high = (n-1);
    int mid;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
            printf("Element found at index %d ",target);
            return 0;
        }
        
        else if(target<a[mid])
            high = mid - 1;
        
        else
            low = mid + 1;
    }
    
    printf("Element not found in list");
}   

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    
    int a[n], x;
    printf("Enetr %d elements in array \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf("Enetr the element to search = ");
    scanf("%d",&x);
    
    BinarySearch(a, n, x);

    return 0;
}


OUTPUT : Enter the size of array = 10
         Enetr 10 elements in array 
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
         Enetr the element to search = 5
         Element found at index 5 



