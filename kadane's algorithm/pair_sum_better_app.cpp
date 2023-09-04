#include <bits/stdc++.h>

using namespace std;

bool paissum(int arr[] , int n,int k)
{
   int low =0;
   int high = n-1;
   while (low < high){
    if (arr[low]+arr[high]==k){
        cout<<low<<" "<<high<<endl;
        return true;
    }
    else if (arr[low]+arr[high] >k)
    {
       high--;
    }
    else{
        low++;
    }
   }
   return false;
}

void insertion_short(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = a[i];
        int j=i-1;
        while (a[j]>current && j>= 0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = current;
    } 
}

int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int k = 31;
    insertion_short(arr,8);
    cout<<paissum(arr,8,k); 
}