#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5e5+100;
ll a[maxn];
ll tong[maxn];
ll ans[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		stack<ll> q;
		for(int j = i; j <= n; j++){
			for(int k = i; k < j; k++){
				if(a[k] == a[j]){
					while(!q.empty() && q.top()!=a[j]){
						q.pop();
					}
					if(!q.empty())q.pop();
				}
			}
			q.push(a[j]);
		}
		while(!q.empty()){
			ans[q.top()]++;
			q.pop();
		}
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
