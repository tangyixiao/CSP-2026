#include<bits/stdc++.h>
using namespace std;
const int mxn = 5e5 + 5;
int a[mxn] , last[mxn] , near[mxn] , ans[mxn];
bool vis[mxn];
int main(){
    freopen("card.in" , "r" , stdin); freopen("card.out" , "w" , stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n , m; cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){  cin >> a[i]; near[i] = last[a[i]]; last[a[i]] = i;  }
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= n ; j++){ vis[a[j]] = false; }
        vector<int> st;
        for(int j = i ; j <= n ; j++){
            int cnt = 0;
            for(int k = 0 ; k < (int)st.size() ; k++){
                if(st[k] == a[j]){ cnt = (int)st.size() - k ; }
            } for(int k = 1 ; k <= cnt ; k++){ st.pop_back(); }
            st.push_back(a[j]);
        } for(int j : st){ ans[j]++; }
    } for(int i = 1 ; i <= m ; i++){ cout << ans[i] << " "; }
    return 0;
}