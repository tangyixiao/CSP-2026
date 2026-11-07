#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;
typedef long long ll;
int n,m,a[maxn],game[maxn],ans[maxn];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)cin >> a[i];
    for(int i = 1;i <= n;i++){
        int cnt = 0;
        for(int j = i;j <= n;j++){
            int x = a[j];
            for(int k = 1;k <= cnt;k++){
                if(game[k] == x){
                    for(int l = k;l <= cnt;l++){
                        game[l] = 0;
                    }
                    cnt -= cnt - k + 1;
                    break;
                }
            }
            cnt++;
            game[cnt] = x;
        }
        for(int i = 1;i <= cnt;i++)ans[game[i]]++;
    }
    for(int i = 1;i <= m;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
