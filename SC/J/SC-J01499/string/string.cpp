#include <bits/stdc++.h>
using namespace std;
int n,a[20005];
char c,x;
string m,r;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        cin >>a[i];
        cin >>c;
        for(int j=1;j<=a[i];j++)
        {
            m+=c;
        }
    }
    if(n==1)
    {
        cout <<0;
        return 0;
    }
    for(int i=m.size();i>=0;i--)
    {
        x=m[i];
        r+=x;
    }
    cout <<0;
    return 0;
}
