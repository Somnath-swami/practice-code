#include <iostream>

using namespace std;

void binary_search(int a[], int target, int n)
{
    
    int low=0;
    int high=(n-1);
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
           cout <<"Element " << target << " found at index " << mid << "\n";
           return;
        }
        else if(target<a[mid])
          high=mid-1;
        else
          low=mid+1;
         
    }
    cout <<"Element not found\n";
}

int main()
{   
    int n;
    cout <<"Enter the size of array ";
    cin >> n;
    
    int a[n],x;
    cout <<"Enter elements in array\n";
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    cout <<"Enter target element to be searched\n";
    cin >> x;
    
    binary_search(a,x,n);
    
    return 0;
}

OUTPUT : 
