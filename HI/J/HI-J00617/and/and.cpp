#include<bits/stdc++.h>
using namespace std; 
long long n,m,ma=0,ans;
long long a[200005];
void dfs(long long x,long long an,long long l){
	if(l>n) return; 
	if(x>=m){
		ans=max(ans,an);
	}else{
		for(long long i=l;i<n;i++){
			if(an==-1) dfs(x+1,a[i],i+1);
			else dfs(x+1,an&a[i],i+1);
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	if(m==n){
		ans=a[0];
		for(long long i=1;i<n;i++) ans&=a[i];
		cout<<ans<<endl;
		return 0;
	}else if(m==1){
		cout<<ma<<endl;
		return 0;
	}
	dfs(0,-1,0);
	cout<<ans<<endl;
	return 0;
}


