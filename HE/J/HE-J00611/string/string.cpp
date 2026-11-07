#include<bits/stdc++.h>
using namespace std;
string c[100005];
int a[100005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    string s = " ";
    string sb = " ";
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i] >> c[i];
        for(int j = 0;j < a[i];j++)
        {
            s = s + c[i];
        }
    }
    int l = s.size();
    for(int i = n;i >= 0;i--)
    {
        for(int j = 0;j < a[i];j++)
        {
            sb = sb + c[i];
        }
    }
    int wei = 0;
    for(int i = l;i >= 0;i--)
    {
        sb[i] == s[i];
        wei++;
    }
    bool cnt[200005];
    int ans = 0;
    for(int i = 0;i <= (l+1)/2;i++)
    {
        if(sb[i] != s[i])
        {
            cnt[i] = 1;
        }
    }
    for(int i = 0;i <= l;i++)
    {
        if(cnt[i])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
