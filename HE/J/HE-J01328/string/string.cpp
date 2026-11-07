#include <bits/stdc++.h>
using namespace std;

int n,a,cnt;
string s,c;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >>a>>c;
        for(int j=1;j<=a;j++)
        {
            s=s+c;
        }
    }
    for(int i=1;i<=s.length()-1;i++)
        if(s[i]!=s[s.length()-1-i])
    {
            s[s.length()-1-i]=s[i];
            cnt++;
    }
    cout <<cnt;
    return 0;
}
