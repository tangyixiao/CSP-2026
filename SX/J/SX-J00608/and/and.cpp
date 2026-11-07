#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,x,ans;
int a[200005],f[35],w[35];
bool vis[25];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			if((1<<j)&a[i]) f[j]++;
		}
	}
	for(int i=30;i>=0;i--){
		if(f[i]>=m){
			x=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if((1<<x)&a[i]) vis[a[i]]=1;
	}
	w[x]=1;	
	for(int st=x-1;st>=0;st--){
		memset(f,0,sizeof f);
		for(int i=1;i<=n;i++){
			if((1<<st)&a[i] && vis[a[i]]) f[st]++;
		}
		if(f[st]>=m){
			w[st]=1;
			for(int i=1;i<=n;i++){
				if(((1<<st)&a[i])==0) vis[a[i]]=0;
			}
		} 
	}
	for(int i=30;i>=0;i--){
		if(w[i]) ans+=(1<<i);
	}
	cout<<ans;
	return 0;
}
