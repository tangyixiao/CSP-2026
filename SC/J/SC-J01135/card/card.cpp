#include <bits/stdc++.h>
using namespace std;
int n,m,a[50005],v[50005],ans[50005];
stack<int> t;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >>n >>m;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++){
        for(int j = i;j <= n;j++){
            if(v[a[j]]){
                while(1){
                    int u = t.top();
                    t.pop();
                    v[u] = 0;
                    if(u == a[j]){
                        break;
                    }

                }
            }
            t.push(a[j]);
            v[a[j]] = 1;
        }
        while(!t.empty()){
            int u = t.top();
            t.pop();
            v[u] = 0;
            ans[u]++;
        }
    }
    for(int i = 1;i <= m;i++){
        cout << ans[i] << ' ';
    }
    return 0;
}