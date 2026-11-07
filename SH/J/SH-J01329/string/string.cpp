#include <bits/stdc++.h>
using namespace std;
string s,a;
long long n,num,d;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>d>>a;
        for(int j=1;j<=d;j++)
        {
            s+=a;
        }
    }
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-1-i])
        {
            num++;
        }
    }
    cout<<num;
    return 0;
}
