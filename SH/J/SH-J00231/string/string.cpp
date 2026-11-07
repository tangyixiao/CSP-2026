#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int siz[200005];
char c[200005];
long long srt[200005];

signed main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    long long sum = 0;
    memset(srt, 0, sizeof srt);
    srt[0] = 1;//cong 1 kai shi
    for(int i = 1; i <= n; i++)
    {
        cin>>siz[i]>>c[i];
        sum += siz[i];
        srt[i] = srt[i - 1] + siz[i - 1];
    }
    long long ans = 0;
    int l = 1, r = n;//dang qian xia biao
    long long curl = 1;//dang qian wei zhi
    while(curl <= sum / 2)//die dai
    {
        long long nl = srt[l] + siz[l] - curl;
        long long nr = (sum - (srt[r] + siz[r] - 1) + 1) + siz[r] - curl;
        //long long nr = srt[r] + siz[r] - (sum - curl + 1);
        //cout<<nl<<" "<<nr<<endl;
        if(nl == nr)
        {
            if(c[l] != c[r]) ans += nl;
            curl = srt[l] + siz[l];
            l++;
            r--;
        }
        else if(nr > nl)
        {
            if(c[l] != c[r]) ans += nl;
            curl = srt[l] + siz[l];
            l++;
        }
        else
        {
            if(c[l] != c[r]) ans += nr;
            curl = (sum - (srt[r] + siz[r] - 1) + 1) + siz[r];
            r--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
