#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+10;
int n,a[N],m,an = 0; 

void dfs(int id,int cnt,int p,int tot){
	if(id == n+1){
		if(p == 0){
			an = max(an,cnt);
		}
		return;
	}
	if(n-id+1 < p) return;
	if(p == 0 && id != n+1){
		an = max(an,cnt);
		return;
	}
	if(a[id] == 0){
		dfs(id+1,cnt,p,tot);
		return;
	}
	if(cnt == 0 && tot!=0){
		return;
	}
	if(tot == 0){
		dfs(id+1,cnt,p,tot); 
		dfs(id+1,a[id],p-1,tot+1); 
		return;
	}
	dfs(id+1,cnt,p,tot); 
	dfs(id+1,cnt&a[id],p-1,tot+1); 
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	srand(time(nullptr));
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			ans = max(ans,a[i]);
		} 
		cout << ans;
		return 0;
	}
	if(m == n){
		int ans = a[1];
		for(int i = 2;i <= n;i++){
			ans&=a[i];
		} 
		cout << ans;
		return 0;
	}
	if(m == 2){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i == j) continue;
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if(n <= 20){
		dfs(1,0,m,0);
		cout << an;
		return 0;
	}
	an = rand();
	cout << an;
	return 0;
} 
