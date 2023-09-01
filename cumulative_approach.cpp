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
    int cumulative[n+1];
    cumulative[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cumulative[i]= cumulative[i-1] +a[i-1];
    }
    int maxsum=INT8_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=cumulative[i] - cumulative[j];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum;
    return 0;
}