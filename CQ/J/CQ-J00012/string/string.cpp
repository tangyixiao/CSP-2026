#include <bits/stdc++.h>
#define double long double
#define int long long
using namespace std;
const double eps=1e-6;
const int inf=0x3f3f3f3f3f3f3f3f,N=2e5+10;
char c[N];
int a[N];
int n,ans=0;
void solve()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
    }
    int l=0,r=n+1,cntl=0,cntr=0;
    char cl,cr;
    while (l+1<r)
    {
        if (cntl==0)
        {
            cl=c[++l];
            cntl=a[l];
        }
        if (cntr==0)
        {
            if (l+1==r)
            {
                break;
            }
            cr=c[--r];
            cntr=a[r];
        }
        int x=min(cntl,cntr);
        if (cl!=cr)
        {
            ans+=x;
        }
        cntl-=x;
        cntr-=x;
    }
    cout<<ans<<'\n';
    return;
}
signed main()
{
    // freopen("string/string6.in","r",stdin);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TestCase=1;
    // cin>>TestCase;
    for (int CaseId=1;CaseId<=TestCase;CaseId++)
    {
        solve();
    }
    return 0;
}

/*
g++ string.cpp -o stringg -std=c++14 -O2
./stringg
*/