#include<bits/stdc++.h>
using namespace std;
int a[11000005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string n;
    cin >> n;
    long long s;
    cin >> s;
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i = 1;i <= s;i++)
    {
        ans++;
        if(a=b=c)
        {
            cout << 0;
        }
        else {
            cout << ans;
        }
    }
    return 0;
}
