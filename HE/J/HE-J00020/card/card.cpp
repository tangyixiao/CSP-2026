#include <bits/stdc++.h>
#define int long long
using namespace std;
namespace qwq{
    static int n,m;
    static vector<int> a(n+1);
    static void main() noexcept{
        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(int mi = 1;mi <= m;mi++){
            int cnt = 0;
            for(int i = 1;i <= n;i++){
                deque<int> cards;
                for(int j = i;j <= n;j++){
                    bool found = false;
                    for(const auto cd: cards){
                        if(!found && (cd == a[j])){
                            found = true;
                            break;
                        }
                    }
                    if(found){
                        int cd = cards.back();
                        while(cd != a[j]){
                            cards.pop_back();
                            cd = cards.back();
                        }
                        cards.pop_back();
                        cards.push_back(a[j]);
                    }else{
                        cards.push_back(a[j]);
                    }
                }
                for(const auto cd : cards){
                    if(cd == mi){
                        cnt++;
                        break;
                    }
                }
            }
            cout << cnt << " \n"[mi == m];
        }

    }
}
signed main() noexcept{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    qwq::main();
    return 0;
}
