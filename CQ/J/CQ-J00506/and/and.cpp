// T3
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m;
vector<ll> a;
vector<vector<ll>> dp;
ll pew(ll k, ll b)
{
    ll ans = 1;
    while (b--)
        ans *= k;
    return ans;
}
string totwo(ll x)
{
    string ans = "";
    while (x > 0)
    {
        int it = x % 2;
        ans += char(it) + '0';
        x /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
ll toten(string x)
{
    ll ans = 0;
    ll pw = ll(x.size()) - 1;
    for (char c : x)
    {
        if (c != '0')
            ans += pew(2, pw);
        pw--;
    }
    return ans;
}
ll anondo(ll h, ll b)
{
    string ans = "";
    string s1 = totwo(h), s2 = totwo(b);
    if ((ll)s1.size() < (ll)s2.size())
    {
        reverse(s1.begin(), s1.end());
        ll it = (ll)s2.size() - (ll)s1.size();
        for (ll i = 1; i <= it; i++)
            s1 += '0';
        reverse(s1.begin(), s1.end());
    }
    if ((ll)s1.size() > (ll)s2.size())
    {
        reverse(s2.begin(), s2.end());
        ll it = (ll)s1.size() - (ll)s2.size();
        for (ll i = 1; i <= it; i++)
            s2 += '0';
        reverse(s2.begin(), s2.end());
    }
    for (int i = 0; i < (ll)s1.size(); i++)
        if (s1[i] == s2[i] && s1[i] == '1')
            ans += '1';
        else
            ans += '0';
    return toten(ans);
}
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    a.assign(n + 5, 0LL);
    dp.assign(n + 5, vector<ll>(m + 5, 0LL));
    // dp[i][j] 表示在第i个物品时，已选j个物品所可获取的最大值。。
    // 诶，云朵！
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    dp[1][1] = a[1];
    for (ll i = 1; i <= n; i++)
        for (ll j = m; j >= 0; j--)
            if (j > 0)
            {
                int k = 0;
                if (j > 1)
                    k = dp[i - 1][j - 1];
                else
                    k = a[i];
                dp[i][j] = max(dp[i - 1][j], (k & a[i]));
            }
            else
                dp[i][j] = dp[i - 1][j];
    cout << dp[n][m] << "\n";
    return 0;
}
/*
前缀和？
NONONO
DFS?
DP?
先试01DP吧。。。稍等
第一个版本戳了，稍等片刻。。
话说按位与是啥
。。。
再等等。。。
应该是状态转移方程式的事。。
咕咕嘎嘎
。。。
我好像开智了
居然自己写出了状态转移方程式
希望测试点别背刺。。。稍等
可恶！！！
背刺！！！
忘了他只能选择m个了。。。
咕咕嘎嘎！！！（绝望）
看我一顿大改。。。
实在不行再打DFS吧。。。。。
稍等。。。（凑企鹅欢唱）
。。。。（long long later)
疑似好像可能写对了！！
咕咕嘎嘎（欢乐！）
奉劝测试点不要再背刺了。
我测试一下，稍等。。
第一个样例对了！！！！！！！！！！！！
举国欢庆！！！
第二个样例别背刺啊！
第二个也对了！！！！！
帮帮邦邦~
姑姑，咕咕咕噶，咕嘎，噶咕咕嘎噶（狂喜）
大数据别TLE，也别MLE啊。。。
稍等，我测大数据。。
（凑企鹅欢唱）
大数据错了。。
咕咕嘎嘎（悲伤）
大数据T了。。
咕咕嘎嘎。。。。（相似）
饿。。。。。。。。。。。。
嘤嘤嘤（悲痛）
为什么。。。
我换个遍历顺序嘞。
MASAKA(难道说。。)
要手写and。。。。
稍等。。
怎么这么长？
咕咕嘎嘎（绝望）
成功手写按位与！（54行。。）
咕咕嘎嘎！（累了）
感觉身体轻飘飘的。。。
大数据还是错的。。
相似了。。。
咕咕嘎嘎。。
还慢了。。
偏了点部分分。
我肘!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
我们之间不合适！
*/

// 101
// 011
// 评测机，老夫为你指条明路，只要这道题给我一个AC，你将来必有好运在机