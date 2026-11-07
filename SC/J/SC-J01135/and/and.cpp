#include <bits/stdc++.h>
using namespace std;
int n,m,a[10005],v[10005],ans,ansn;
void f(int b){
    if(b > m){
        ans = max(ans,ansn);
        return;
    }
    for(int i = 1;i <= n;i++){
        if(v[i]){
            continue;
        }
        int l = ansn;
        if(b == 1){
            ansn = a[i];
        }
        else{
            ansn = ansn & a[i];
        }
        v[i] = 1;
        f(b + 1);
        v[i] = 0;
        ansn = l;

    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >>n >>m;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    f(1);
    cout << ans;
    return 0;
}
