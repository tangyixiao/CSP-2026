#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int n,m;
unsigned int p[N],f[N];
bool used[N];
unsigned int dfs(int idx,int st,unsigned int cur){
	if(idx>m){
		return cur;
	}
	unsigned int ans = 0;
	for(int i=st;i<=n;i++){
		ans=max(ans,dfs(idx+1,i+1,cur&a[i]));
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,std::greater<int>());
	if(m==1){
		cout<<a[1];
	}else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j) ans=max(ans,a[i]&a[j]);
		cout<<ans;
	}else if(m==n){
		int ans=a[1];
		for(int i=1;i<=n;i++)ans&=a[i];
		cout<<ans;
	}else if(m==n-1){
		unsigned int ans = 0;
		p[0]=-1;
		p[1]=a[1];
		for(int i=2;i<=n;i++)p[i]=p[i-1]&a[i];
		f[n+1]=-1;
		f[n]=a[n];
		for(int i=m;i>0;i--)f[i]=f[i+1]&a[i];
		for(int i=1;i<=n;i++)
			ans=max(p[i-1]&f[i+1],ans);
		cout<<ans;
	}else if(n<=20){
		cout<<dfs(1,1,-1);
	}else{
		unsigned int ans=-1;
		for(int i=1;i<=m;i++)ans&=a[i];
		cout<<ans;
	}
	return 0;
}