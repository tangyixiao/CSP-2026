#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
bool vis[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) vis[i]=true;
	for(int i=29;i>=0;i--){
		int sum=0;
		for(int j=1;j<=n;j++) 
			if(vis[j]) sum+=((a[j]>>i)&1);
		if(sum<m) continue; ans+=(1<<i);
		for(int j=1;j<=n;j++) 
			if(((a[j]>>i)&1)==0) vis[j]=false;
	}
	cout<<ans; return 0;
}
