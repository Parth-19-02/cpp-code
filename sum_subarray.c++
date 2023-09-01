#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the array size"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the values"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       sum += arr[j];
    }
  }
  cout<<sum<<endl;
return 0;
}