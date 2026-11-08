#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2000005];
bool vis[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	bool bj=0;
	for(int k=30;k>=0;k--){
		int sum=0;
		vector<int>v;
		for(int i=1;i<=n;i++){
			if(vis[i]) continue;
			if((1<<k)&a[i]) sum++;
			else v.push_back(i);
		}
		if(sum<m){
			if(bj) break;
			continue;
		}
		if(sum>=m){
			bj=1;
			int len=v.size();
			for(int i=0;i<len;i++) vis[v[i]]=1;
		}
		if(sum==m) break;
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
//			cout<<a[i]<<' ';
			if(ans==-1) ans=a[i];
			else ans=ans&a[i];
		}
	}
//	cout<<endl;
	cout<<ans;
	return 0;
}
/*
4 2
2 3 15 12 12
*/
/*
5 3
31 3 1 15 7
*/
