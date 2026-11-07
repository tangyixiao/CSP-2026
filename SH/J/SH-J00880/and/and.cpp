#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2000005];
int f[2000005];
int ans=-1;

void dfs(int x,int d,int cnt){
	if(cnt==m){
		ans=max(ans,x);
		return;
	}
	if(d>n) return;
	dfs((x&a[d]),d+1,cnt+1);
	dfs(x,d+1,cnt);
}

bool cmp(int a,int b){
	return a>b;
}

bool check(){
	for(int i=1;i<=n;i++){
		while(a[i]){
			if(a[i]%2==0)  return false;
			a[i]/=2;
		}
	}
	return true;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int st=1;
	for(int i=1;i<=31;i++) st*=2;
	st--;
	if(n<=20){
		dfs(st,1,0);
		cout<<ans<<endl;
		return 0;
	}
	else if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans<<endl;
		return 0;
	}
	else if(m==2 && n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++) ans=max(ans,(a[i]&a[j]));
		}
		cout<<ans<<endl;
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans<<endl;
		return 0;
	}
	else if(check()){
		sort(a+1,a+n+1,cmp);
		ans=a[1];
		for(int i=2;i<=m;i++) ans&=a[i];
		cout<<ans<<endl;
	}
	else{
		f[0]=st;
		for(int i=1;i<=n;i++){
			for(int j=m;j>=1;j--) f[j]=max(f[j],f[j-1]&a[i]);
		}
		cout<<f[m]<<endl;
	}
	return 0;
}

