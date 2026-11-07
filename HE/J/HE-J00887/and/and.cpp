#include <bits/stdc++.h>
using namespace std;
long long n,m;
string a,ans;
string nmax(string a,string b)
{
    if(a.size()>b.size())
        return a;
    if(a.size()<b.size())
        return b;
    if(a>b)return a;
    return b;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        ans=nmax(ans,a);
        if(a.size()<=5)
        {
            int b=0;
            for(int i=0;i<a.size();i++)
            {
                b=b*10+a[i]-'0';
            }
            if(b==m)
            {
                cout<<a;
                return 0;
            }
        }
    }
    cout<<ans;
    return 0;
}
