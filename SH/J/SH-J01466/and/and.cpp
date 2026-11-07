#include<bits/stdc++.h>
using namespace std;

const int N = 2e3+10;
const int M = 2e3+10;

int n, m;
int a[N];
int dp[N][M]; // 1~i, choose J, max num

int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);


    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<=n; i++){
        dp[i][1] = a[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=2; j<=m; j++){
            dp[i][j] = dp[i-1][j]; // not choose
            // choose
            for(int k=1; k<=i-1; k++){
                dp[i][j] = max(dp[i][j], (dp[k][j-1] & a[i]));
            }
            
        }
    }

    cout << dp[n][m] << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}