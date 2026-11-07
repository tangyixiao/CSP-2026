#include<bits/stdc++.h>
using namespace std;
int n,m,nmax = -1,a[200005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n>> m;
    for(int i = 1;i <= n;i++){
        int t;
        cin >> t;
        a[i] = t;
    }
    if(m == 1){
        for(int i = 1;i <= n;i++) nmax = max(nmax,a[i]);
    }else if(m == 2){
         for(int i = 1;i <= n;i++){
            for(int j = i + 1;j <= n;j++) nmax = max(nmax,a[i] & a[j]);
         }
    }
    cout << nmax;
    return 0;
}
