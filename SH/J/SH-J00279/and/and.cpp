#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
#define int long long
int a[N],n,m,ans = 0;
void dfs(int sum,int x,int chose){
	if(n - x + 1 < m - chose){
		return;
	}
	if(chose == m){
		ans = max(ans,sum);
		return;
	}
	if(x > n){
		return;
	}
	if(chose == 0){
		dfs(a[x],x + 1,chose + 1);
		dfs(sum,x + 1,chose);
	}
	else{
		dfs(sum & a[x],x + 1,chose + 1);
		dfs(sum,x + 1,chose);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	if(m == n){
		int cnt = a[1];
		for(int i = 2;i <= n;i++){
			cnt &= a[i];
		}
		cout<<cnt;
	}
	else{
		dfs(0,1,0);
		cout<<ans;
	}
}
