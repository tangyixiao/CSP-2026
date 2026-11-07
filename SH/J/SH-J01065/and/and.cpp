#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005],b[200005];
void dfs(int d){
	if(d>n){
		int cnt=0,x=0;
		for(int i=1;i<=n;i++){
			if(b[i]==1){
				if(x==0)
					x=a[i];
				else
					x&=a[i];
				cnt++;
			}
		}
		if(cnt==m)
			ans=max(ans,x);
		return;
	}else{
		for(int i=0;i<=1;i++){
			b[d]=i;
			dfs(d+1);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		int mx=-1;
		for(int i=1;i<=n;i++)
			mx=max(mx,a[i]);
		cout<<mx;
	}else if(m==2){
		int ans=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
	}else{
		dfs(1);
		cout<<ans;
	}
	return 0;
}
