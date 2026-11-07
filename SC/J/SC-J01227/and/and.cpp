#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define endl '\n'
int n,m,ans;
int a[200005];
bool vis[200005];
void dfs(int pos,int num){
	if(num==m){
		int sum=0;
		bool f=0;
		for(int i = 1;i <= n;i++){
			if(vis[i]==1){
				if((sum==0)&&(f==0)){
					sum=a[i];
					f=1;
				}else{
					if(sum==0){
						return;
					}else{
						sum &= a[i];
					}
				}
			}
		}
		ans=max(ans,sum);
		return;
	}
	if(num == m+1){
		return;
	}
	if(pos == n+1){
		return;
	}
	for(int i = pos;i <= n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(pos+1,num+1);
			vis[i]=0;
			dfs(pos+1,num);
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m==1){
		cout << 0;
	}else{
		dfs(1,0);
		cout << ans;
	}
	return 0;
}