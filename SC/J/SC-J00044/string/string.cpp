#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    string s,si;
    int n,a;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a >> si;
        for(int i=1;i<=a;i++)
        {
            s+=si;
        }
    }
    int l=s.length(),cnt=0;
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}