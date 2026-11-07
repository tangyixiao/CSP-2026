#include <bits/stdc++.h>
using namespace std;
int s[100000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin >> n;
    int back=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        char c;
        cin >> a >> c;
        for(int j=1;j<=n;j++)
        {
            back++;
            s[back]=c;
        }
    }
    int l=1,r=back;
    long long ans = 0;
    while(l<=r)
    {
        if(s[l]!=s[r])ans++;
        l++,r--;
    }
    cout << ans;

    return 0;
}


