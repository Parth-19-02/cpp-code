#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the record"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    if(n=1){
         cout<<1<<endl;
    }
    int ans = 0;
    int mx = -1;
    for(int i =0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx,arr[i]);
    
    }
    cout<<"The total record breaking day : "<<ans<<endl;
return 0;
}