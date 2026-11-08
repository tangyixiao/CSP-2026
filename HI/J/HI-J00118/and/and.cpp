#include<bits/stdc++.h>
using namespace std;
int n,m,ans,ans1,v[200005];
int a[200005],b[200005];
void dfs(int x){
	if(x>m){
		ans1=b[1];
		for(int i=2;i<=m;i++){
			ans1=ans1&b[i];
		}ans=max(ans,ans1);
		return;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			b[x]=a[i];
			dfs(x+1);
			v[i]=0;
			b[x]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==n-1){
		int ans2;
		for(int j=1;j<=n;j++){
			if(j==1)ans2=a[2];
			else ans2=a[1];
			for(int i=1;i<=n;i++){
				if(i!=j){
					ans2=ans2&a[i];
				}
			}
		}ans=max(ans,ans2);
		cout<<ans;
	}else if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}else{
		dfs(1);
		cout<<ans;
	}
	return 0;
}
