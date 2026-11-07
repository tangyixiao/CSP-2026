#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    int n,m,a[200005],c[200005] = {},r = 0,x = 0,ans[300005] = {};
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int k = 1; k <= n; k++){
        for (int i = k;i <= n; i++){
            for (int j = 1; j <= r;i++){
                if (a[i] == c[j]){
                    r = j-1;
                    break;
                }
                //ans[c[j]] += 1;
            }
            c[r + 1] = a[i];
            r += 1;
        }
        for (int i = 1; i <= r; i++){
            ans[c[i]] += 1;
        }
        r = 0;
    }
    for (int i = 1; i <= m; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
