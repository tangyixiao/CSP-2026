#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
int ans;
bool vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=29;i>=0;i--){
		ans<<=1;
		int tot=0;
		for(int j=1;j<=n;j++){
			if(vis[j]) continue;
			int x=(a[j]>>i)&1;
			tot+=x;
		}
		if(tot<m) continue;
		for(int j=1;j<=n;j++){
			if(vis[j]) continue;
			int x=(a[j]>>i)&1;
			if(!x) vis[j]=1;
		}
		ans++;
	}
	cout<<ans;
	return 0;
}