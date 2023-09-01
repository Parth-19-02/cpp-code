#include "bits/stdc++.h"
using namespace std;

int main()
{
   int n;
   cin>>n;

   int arr[n];
   for (int i=0;i<n;i++){
        cin>>arr[i];
   }
   const int N = 1e5+2; 
   int idx_arr[N];
    for(int i=0;i<N;i++){
        idx_arr[i]= -1;
     } 
   int minidx = INT_MAX;
   
   cout<<"t1"<<endl;
   for (int i=0;i<n;i++){
        if(idx_arr [arr[i]] != -1)
        {
            minidx = min(idx_arr[arr[i]],minidx);
        }
        else{
            idx_arr[arr[i]] = i;
        }
   }

    if (minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx + 1<<endl;
    }

return 0;
}