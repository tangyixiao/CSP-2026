#include <bits/stdc++.h>
using namespace std;

int main(){
    //use dp: use the logic of 01 knapsack but redefine the add process as '&', and also the knapsack have eternity size
    //formula: dp[?][0], dp[0][?] = 11111111111111111111..., dp[i][j] = max(dp[i - 1][j](do not choose), dp[i - 1][) -----no
    //one line is enough: dp[0] = 1111111111111111111111... (none have been chosen), dp[i] = max(dp[i - 1](not choose), dp[i - 1] & v[i](the two numbers being added in place))
    //now i see the limit of m things, then use 01 knapsack with m as the size of pack and every number have a size of 1
    //cost[i] = 1
    //no val, turned into '&'
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<long long> v(n + 1);
    long long maxn = -10000000;
    //vector<bool> first(m + 1, 0);
    for (int i = 1; i <= n; ++i){
        cin >> v[i];
        maxn = max(maxn, v[i]);
    }
    cout << maxn;
    return 0;
}
