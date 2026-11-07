#include <bits/stdc++.h>
using namespace std;
long long l[200010];
char c[200010];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int cnt = 0,n,ans=0;
    string s;
    cin >> n;
    for (int i = 1;i<=n;i++)
    {
        cin >> l[i] >> c[i];
        cnt+=l[i];
        for (int j = 1;j<=l[i];j++)
        {
            s+=c[i];
        }
    }
    int l = 0;
    int r = cnt-1;
    while (l<r)
    {
        if (s[l] != s[r])
        {
            ans++;
        }
        l++;
        r--;
    }
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
