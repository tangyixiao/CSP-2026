#include <bits/stdc++.h>
using namespace std;
const int N = 200010;
struct P
{
    int num;
    vector<int> erjinzhi;
    int biggest;
}a[N];
int n, k;
void to_erjinzhi(int idx)
{
    int tmp = a[idx].num;
    while (tmp)
    {
        a[idx].erjinzhi.push_back(tmp % 2);
        tmp /= 2;
    }
    a[idx].biggest = a[idx].erjinzhi.size();
    while (a[idx].erjinzhi.size() < 32)
    {
        a[idx].erjinzhi.push_back(0); // insert 0
    }
    reverse(a[idx].erjinzhi.begin(), a[idx].erjinzhi.end());
}
// map<int, int> nums;
int ans;
bool cmp (P x, P y)
{
    if (x.biggest != y.biggest) return x.biggest > y.biggest;
    return __builtin_popcount(x.num) > __builtin_popcount(y.num);
}
int Solve(){
    // for (int i = 0; i < 32; ++ i )
    // {
    //     for (int j = 1; j <= n; ++ j )
    //     {
    //         if (a[j].erjinzhi[i] == 1)
    //         {
    //             mp[i] ++ ;
    //         }
    //     }
    // }
    sort (a + 1, a + n + 1, cmp);
    ans = a[1].num;
    // for (int i = 1; i <= n; ++ i ) cout << a[i].num << endl;
    for (int i = 2; i <= k; ++ i )
    {
        ans = (ans & a[i].num);
    }
    return ans;
}
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++ i )
    {
        scanf("%d", &a[i].num);
        to_erjinzhi(i);
        // for (auto x : a[i].erjinzhi) cout << x << ' ';
        // cout << endl;
    }
    if (k == 1)
    {
        int maxn = 0;
        for (int i = 1; i <= n; ++ i )
        {
            maxn = max(maxn, a[i].num);
        }
        cout << maxn << endl;
        return 0;
    }
    else if (k == n)
    {
        int maxn = a[1].num;
        for (int i = 2; i <= n; ++ i )
        {
            maxn = (maxn & a[i].num);
        }
        cout << maxn << endl;
        return 0;
    }
    else if (k == 2)
    {
        int maxn = 0;
        for (int i = 1; i <= n; ++ i )
        {
            for (int j = i + 1; j <= n; ++ j )
            {
                maxn = max(maxn, (a[i].num & a[j].num));
            }
        }
        cout << maxn << endl;
        return 0;
    }
    else cout << Solve() << endl;
    return 0;
}
