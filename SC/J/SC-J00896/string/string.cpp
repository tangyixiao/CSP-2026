#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

//main
struct BDS
{
    long long x;
    char c;
}f[N],g[N];
int n;
//

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long s = 0;
    for(int i = 1;i<=n;i++)
    {
        cin >> f[i].x >> f[i].c;
        s += f[i].x;
    }
    long long ts = 0;
    int tn = 0,tn2 = 0;
    for(int i = 1;i<=n;i++)
    {
        long long t = ts+f[i].x;
        if(t > s/2)
        {
            if(ts < s/2)    g[++tn2] = {t-(s+1)/2,f[i].c},f[i].x = s/2-ts,tn = i;
            else if(s&1 && ts == s/2)   g[++tn2] = {t-(s+1)/2,f[i].c};
            else    g[++tn2] = f[i];
        }
        else    tn = i;
        ts = t;
        // cout << ts <<" " << s/2 <<"\n";
    }
    // cout <<"\n";
    // for(int i = 1;i<=tn;i++)    cout << f[i].x <<" " << f[i].c <<"\n";
    // cout <<"\n";
    // for(int i = tn2;i>=1;i--)   cout << g[i].x <<" " << g[i].c <<"\n";
    // cout <<"\n";
    int i = 0,j = tn2+1;
    long long s0 = 0,s1 = 0,an = 0;
    while(i <= tn && j >= 1)
    {
        if(s0 > s1)
        {
            an += (f[i].c != g[j].c)*max(0ll,min(g[j].x,f[i].x-s0+s1));
            j--;
            s1 += g[j].x;
        }
        else
        {
            an += (f[i].c != g[j].c)*max(0ll,min(f[i].x,g[j].x-s1+s0));
            i++;
            s0 += f[i].x;
        }
        // cout << i <<" " << j <<" " << s0 <<" " << s1 <<" " << an <<"\n";
    }
    cout << an;
    return 0;
}
/*
5
1 a
3 a
4 b
1 a
4 c

aaaabbbbacccc
ccccabbbbaaaa
*/