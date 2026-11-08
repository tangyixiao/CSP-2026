#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005],b[200005],c[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	for(ll i = 1;i <= n;i ++){
		cin >> a[i];
	} 
	if(n <= 5000){
		for(ll i = 1;i <= n;i ++){
			stack<ll> t;
			for(ll j = 1;j <= m;j ++){
				b[j] = 0;
			}
			for(ll j = i;j <= n;j ++){
				if(b[a[j]] == 1){
					while(t.top() != a[j])
						b[t.top()] = 0,t.pop();
					b[t.top()] = 0,t.pop();
				}
				t.push(a[j]),b[a[j]] = 1;
			}
			while(!t.empty()){
				c[t.top()] ++;
				t.pop();
			}
		}
		for(ll i = 1;i <= m;i ++)
			cout << c[i] << ' ';
	}
	
	return 0;
}



