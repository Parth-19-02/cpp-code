#include <bits\stdc++.h>
using namespace std;

int main()
{
  int mx = -1999999;
  int n;
  cout<<"Enter the array size"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the values"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    mx = max(arr[i],mx);
  }
  cout<<"The maximum number is :- % "<<mx<<endl;

return 0;
} 