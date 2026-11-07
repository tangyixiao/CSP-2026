#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 5;
ll n,m,a[N];
ll v[N],ans[N],vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		cout << n;
		return 0;
	}else if(m == 2){
		if(n == 3) cout << n << " " << 0;
		else cout << n << " " << n;
	}
	for(int l = 1;l <= n;l++){
		memset(v,0,sizeof(v));
		memset(vis,0,sizeof(vis));
		for(int i = l;i <= n;i++){
   			v[a[i]]++;
			if(v[a[i]] > 1){
				for(int j = i - 1;j <= l;j++){
					v[a[j]]--;
					vis[a[j]] = 1;
				}
				if(a[i] == a[l]) break;
			}
		}
		for(int j = 1;j <= n;j++){
			ans[j] += v[j];
		}
	}
	for(int i = 1;i <= m;i++){
		ans[i] += v[i];
	}
	for(int i = 1;i <= m;i++){
		cout << v[i] << " ";
	}
	return 0;
}