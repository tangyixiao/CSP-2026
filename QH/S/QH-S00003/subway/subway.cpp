#include<bits/stdc++.h>
using namespace std;
int mp[510][510],v[510],ans[510];
int n,m,c,d,q1;
int q[510];
bool vis[510];
void dif(int s,int sign){
	vis[s]=1;
	for(int i=1;i<=n;i++){
		if(mp[s][i]!=0&&vis[i]==0&&ans[s]+mp[s][i]<ans[i]){
			ans[i]=ans[s]+mp[s][i];
			q[sign]=ans[i];
			sign++;
		}
	}
	sort(q+1,q+n+1);
	int lon=sign-1;
	for(int i=1;i<=n;i++){
		if(ans[i]==q[1]){
			q[1]=1e9;
			sort(q+1,q+n+1);
			dif(i,lon);
		}
	}
	return ;
}
int main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	cin>>c>>n>>m>>d>>q1;
	for(int i=1;i<=n;i++)cin>>v[i];
	while(m--){
		int k;
		cin>>k;
		int a[510],t[510];
		for(int i=1;i<=k;i++)cin>>a[i]>>t[i];
		for(int i=1;i<=k;i++){
			for(int j=i+1;j<=k;j++){
				mp[a[i]][a[j]]=v[i]+v[j];
				mp[a[j]][a[i]]=v[i]+v[j];
			}
		}
	}
	while(q1--){
		int s,e;
		cin>>s>>e;
		for(int i=1;i<=n;i++){
			q[i]=1e9;
			ans[i]=1e9;
			vis[i]=0;
		}
		ans[s]=0;
		dif(s,1);
		cout<<ans[e]+v[s]+v[e]<<endl;
	}
	return 0;
}
