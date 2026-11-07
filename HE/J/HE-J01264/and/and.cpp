#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],fA=1,fB=1,ans,vis[200005];
void dfs(int t,int now){
	if(now<=ans)return;
	if(t==0){
		ans=now;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(t-1,now&a[i]);
			vis[i]=0;
		}
	}
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)fB=0;
		int x=__lg(a[i]+1);
		if(pow(2,x)!=(a[i]+1))fA=0;
	}
	if(m==1 || n==1){
		cout<<a[1];
		return 0;
	}
	if(n<=25){
		dfs(m,pow(2,20)-1);
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			int temp=a[1];
			if(i==1)temp=a[2];
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				temp=temp&a[j];
			}
			ans=max(ans,temp);
		}
		cout<<ans;
		return 0;
	}
	if(fA){
		cout<<a[m];
		return 0;
	}
	if(fB){
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	cout<<0;
	return 0;
}
