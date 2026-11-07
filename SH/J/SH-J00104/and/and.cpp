#include<bits/stdc++.h>
using namespace std;
int n,a[200005],ans=-1,use[200005],yh,m,ma=-1,mi=0x3f3f3f3f;
void dfs(int p,int cnt){
	if(p==m+1)	{
	ans=max(ans,cnt);}
	for(int i=1;i<=n;i++){
		if(use[i]){
			continue;
		}
		if(p==1){
				use[i]=1;
			dfs(p+1,a[i]);
			use[i]=0;
		}
		else{
				use[i]=1;
			dfs(p+1,a[i]&cnt);
			use[i]=0;
		}
	}
	}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	ma=max(ma,a[i]);
	mi=min(mi,a[i]);
	}
	yh=a[1];
		for(int i=2;i<=n;i++){
	yh&=a[i];
	
	}
	if(n<=20){
		dfs(1,0);
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	if(m==n){
		cout<<yh;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
		return 0;
	}
sort(a+1,a+n+1);
cout<<a[m];
	return 0;
} 
