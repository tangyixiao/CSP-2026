#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N];
long long maxx;
bool vis[N];
void dfs(int i,long long ans){
	cout<<"t"<<i<<"  "<<ans<<endl;
	if (i>m){
		maxx=max(maxx,ans);
		return;
	}
	for (int j=n;j>=1;j--){
		if (vis[j]){
			continue;
		}
		vis[j]=1;
		cout<<"ch"<<a[i]<<endl;
		dfs(i+1,ans&a[i]);
		vis[j]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	
	//for (int i=1;i<=n;i++){
	//	for (int j=1;j<=n;j++){
	//		vis[j]=0;
	//	}
	//	vis[a[i]]=1;
	//	dfs(1,a[i]);
	//}
	//cout<<maxx;
	cout<<a[(n+1)/2];
}
