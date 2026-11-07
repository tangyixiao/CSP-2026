#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string s="";
    int n,a[200005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char c;
        cin>>a[i]>>c;
        for(int i=1;i<=a[i];i++)
        {
            s+=c;
        }
    }
    int cnt=0;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
