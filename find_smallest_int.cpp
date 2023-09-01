#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const  int N=1e5+2;
    int ans = -1;
    bool arr[N];
    for(int i=0;i<N;i++)
    {
        arr[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            arr[a[i]]=true;
        }
    }
    for(int i=1;i<N;i++)
    {
        if(arr[i] == false)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;

}