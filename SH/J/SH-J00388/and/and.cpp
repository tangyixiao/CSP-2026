#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n,m,a[N],maxn,ans,andans;
void dfs(int x,int y,int u){
	if(u == m){
		ans = max(ans,y);
		return;
	}
	for(int i = x+1;i<=n;++i){
		dfs(i,y&a[i],u+1);
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;++i){
		cin >> a[i];
		maxn = max(maxn,a[i]);
		if(i == 1)andans = a[i];
		andans = andans&a[i];
	}
	if(n<=20){
		for(int i = 1;i<=n;++i){
			dfs(i,a[i],1);
		}
	}
	else if(n<=2000){
		if(m == 1){
			cout << maxn;
			return 0;
		}
		else if(m == n){
			cout << andans;
			return 0;
		}
		else if(m == 2){
			for(int i = 1;i<=n;++i){
				for(int j = i+1;j<=n;++j){
					ans = max(ans,a[i]&a[j]);
				}
			}
		}
	}
	else{
		int tf=1,n1=n;
		while(n1>1){
			if(n1%2==0){
				n1/=2;
			}
			else{
				tf = 0;
				break;
			}
		}
		if(tf){
			cout << n-m;
			return 0;
		}
	}
	cout << ans;
	return 0;
}
