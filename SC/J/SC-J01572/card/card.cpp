#include<bits/stdc++.h>
#define PII pair<int, int>
#define fi first
#define se second
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N], loc[N], ans[N];
vector<PII> lis;
int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    bool flagA = 1;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        if(a[i] < a[i - 1]) flagA = 0;
    }
    if(flagA){
        for(int i = 1; i <= n; i++) loc[a[i]] = i;
        for(int i = 1; i <= m; i++) printf("%d ", loc[i]);
    }else{
        for(int i = 1; i <= n; i++){
            lis.clear();
            for(int j = 1; j <= m; j++) loc[j] = 0;
            for(int j = i; j <= n; j++){
                if(!loc[a[j]]) loc[a[j]]++;
                else{
                    while((*lis.rbegin()).fi != a[j]){
                        loc[(*lis.rbegin()).fi]--;
                        lis.pop_back();
                    }
                    lis.pop_back();
                }
                lis.push_back({a[j], j});
            }
            for(PII j : lis){
                ans[j.fi]++;
            }
        }
        for(int i = 1; i <= m; i++) printf("%d ", ans[i]);
    }
    return 0;
}