#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans =2;
    int crr = 2;
    int pd = arr[1] - arr[0];
    for(int i=2;i<n;i++){
        if(pd == arr[i]-arr[i-1])
        {
            crr++;

        }
        else{
            
            pd =  arr[i] - arr[i-1];
            crr=2;
        }
    }
 ans = max(crr,ans);
 cout<<"The lanth of the longes arithmeti subarray is : "<<ans<<endl;
return 0;
}