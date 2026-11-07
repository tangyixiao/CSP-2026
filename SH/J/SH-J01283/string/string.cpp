#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll t;
    char c;
}a[200010], b[200010];
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    ll len = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> a[i].t >> a[i].c;
        len += a[i].t;
        if(a[i].c == a[i-1].c){
            a[i-1].t += a[i].t;
            n--;i--;
       	}
    }
    ll nowi = 0; // 现在的string长度
    ll midid = 0; //输入第几个后超过mid
    ll mid = (len+1)/2;
    for(ll i = 1; i <= n; i++){
        nowi += a[i].t;
        if(nowi >= mid){
            midid = i;
            break;
        }
    }
    for (ll i = n; i > midid; i--){
        b[n-i+1] = a[i];
    }
    ll nb = n-midid;
    if(nowi - mid){
    	nb++;
        b[nb].t = nowi-mid;
        b[nb].c = a[midid].c;
        a[midid].t -= nowi-mid;
    }
    if(len%2){
        a[midid].t--;
        if(a[midid].t == 0) midid--;
    }
    ll ans = 0;
    ll i, j;
    i = j = 1;
    while(i <= midid && j <= nb){
    	if(a[i].c != b[j].c) ans += min(a[i].t , b[j].t);
        a[i].t -= min(a[i].t, b[j].t);
        b[j].t -= min(a[i].t, b[j].t);
        if(!a[i].t) i++;
        if(!b[j].t) j++;  
    }
    cout << ans;
    return 0;
}
