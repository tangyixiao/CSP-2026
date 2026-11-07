#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll a[1000086];
bool b[1000086];
ll ans[1000086];
//ll c[1000086];
//ll k = 1;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	memset(b,true,sizeof(b));
	for (ll i = 1; i <= n; i++) cin >> a[i];
	for (ll i = 1; i <= n; i++) {
		stack<ll> q;
		
		for(ll j=i;j<=n;j++){
			if(b[a[j]]){q.push(a[j]);
				b[a[j]]=false;
			}
			else{
				while(1){
					if(q.top()==a[j]) break;
					else{
						b[q.top()]=true;
						q.pop();
					}
				}
			}
		}
		int k=q.size();
		for(ll j=1;j<=k;j++){
			b[q.top()]=true;
			ans[q.top()]++;
			q.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}