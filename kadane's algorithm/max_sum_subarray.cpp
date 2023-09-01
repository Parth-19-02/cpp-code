#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int current = 0;
    int maxsum =INT_MIN;
    for(int i=0;i<n;i++)
    {
        current+=a[i];
        if(current<0)
        {
            current=0;
        }
        maxsum = max(maxsum,current);
    }
    cout<<maxsum;
    return 0;
}