#include <iostream>
#include <algorithm>
#include <cstdint>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int64_t n,m;
    cin >> n >> m;
    int64_t a[n + 1],sum[m + 1];
    bool num[m + 1];
    for(int i = 1;i <= n;++i){
        cin >> a[i];
    }
    for(int i = 1;i <= m;++i){
        sum[i] = 0;
        num[i] = 1;
    }
    for(int i = 1;i <= n;++i){
        for(int j = i;j <= n;++j){
            if ((!num[a[j]]) || a[j] == a[n]){
                continue;
            }
            bool z = 1;
            for (int k = i;k < j && z;++k){
                for (int l = j + 1;l <= n && z;++l){
                    if (a[k] == a[l]){
                        z = 0;
                    }
                }
            }
            if (z){
                ++sum[a[j]];
                num[a[j]] = 0;
            }
        }
        for(int i = 1;i <= m;++i){
            num[i] = 1;
        }
    }
    sum[a[n]] = n;
    for(int i = 1;i <= m;++i){
        cout << sum[i] << ' ';
    }
    return 0;
}

