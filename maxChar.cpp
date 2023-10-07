#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    
int main()
{
    string str = "absejojwaeojdjoavejjpoae";
    int count[26];
    for(int i=0;i<26;i++)
        count[i] =0;
    for(int i=0; i<str.size();i++)
        count[str[i] -'a']++;
    int max =0;
    char ans = 'a';
    for (int i=0;i<26;i++)
    {
        if(count[i]>max)
        {
            max = count[i];
            ans = i+'a';
        }
    }
    cout<< max <<ans<<endl;
    return 0;
}