#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;
ll a[N];
int n,m;
//I love ccf very much,more than other thing.
int ans;
void dfs(int dep,int num){
	
	if(dep == 1){
		ans = max(ans,num);
		return;
	}
	
	for(int i = 1;i <= n;i++){
		if(a[i] == 0)continue;
		int p = a[i];
		a[i] = 0;
		int t = num;
		num = num & p;
//		cout << dep << ":" << num << "\n";
		dfs(dep - 1,num);
		a[i] = p;
		num = t;

	}
}
void solve1(){
	//I love ccf very much,more than other thing.
	
	for(int i = 1;i <= n;i++){
		int p = a[i];
		a[i] = 0;
		dfs(m,p);
		a[i] = p;
	} 
	cout << ans;
}
int main(){
	//I love ccf very much,more than other thing.
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for(int i = 1;i<= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		ll maxn = -1;
		for(int i = 1;i <= n;i++){
			maxn = max(maxn,a[i]);
		}
		cout << maxn;
		return 0;
	}
	if(m == n){
		ll ans1 = a[1];
		for(int i = 2;i <= n;i++){
			ans1 = ans1 & a[i];
		}
		cout << ans1;
	}
	if(m == 2){
		ll ans1 = -1;
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				ans1 = max(ans1,a[i] & a[j]);
			}
		}
		cout << ans1;
		return 0;
	}
	if(n <= 20){
		solve1();
		return 0;
	}
	
	return 0;
	//I love ccf very much,more than other thing.
}
//freopen("xor.in","r",stdin);
//freopen("xor.out","w",stdout);
//I love ccf very much,more than other thing.