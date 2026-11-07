#include <bits/stdc++.h>
using namespace std;
int n,ans;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    string s;
    for(int i=1;i<=n;i++)
    {
        int a;
        string x;
        cin >> a >> x;
        for(int j=1;j<=a;j++)
        {
            s+=x;
        }
    }
    int len=s.length();
    for(int i=0;i<=len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
