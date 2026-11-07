#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;const int MAXN=2e5+300;
int a[MAXN];//bool v[MAXN];
//bool check(int x){
//	for(int i=1;i<=n;i++)
//}
int ans=-1e18;
void dfs(int h,int k,int sum){
	if(h==m+1){
		ans=max(ans,sum);
		return;
	}
	if(k>n) return;
	dfs(h+1,k+1,sum&a[k]);
	dfs(h,k+1,sum);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	dfs(0,1,a[1]);
	cout << ans;
//	int ans=-1e18;
//	for(int i=1;i<=n-m+1;i++){
//		int sum=a[i];
//		for(int j=i+1;j<=i+m-1;j++){
//			sum=(sum&a[j]);
//		}
//		ans=max(ans,sum);
//	}
//	cout << ans;
//	cout << (0&3);
	return 0;
}
