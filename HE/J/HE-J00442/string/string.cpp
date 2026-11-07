#include <bits/stdc++.h>
using namespace std;

int n,a[100000005];
string c;
string s,s1;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
        for(int j=1;j<=a[i];j++)
        {
            s+=c[i];
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        s1+=s[i];
    }
    if(s1 == s) cout<<"0";
    return 0;
}
