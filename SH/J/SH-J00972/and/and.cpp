#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a[200010],f[200010],ans;
bool vis[200010];
void solve1(int j,int cnt,long long sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=j;i<=n;i++){
		solve1(i+1,cnt+1,sum&a[i]);
	}
}
void solve2(){
	f[1]=a[n];vis[n]=1;
	for(int i=1;i<=m;i++){
		int x;
		for(int j=1;j<n;j++){
			if(vis[j]==0){
				if((f[i-1]&a[j])>f[i]){
					f[i]=f[i-1]&a[j];
					x=j;
				}
			}
		}
		vis[x]=1;
	}
	cout<<f[m];
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n-1){
		sort(a+1,a+n+1);
		ans=a[2];
		for(int i=3;i<=n;i++) ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n;i++) solve1(i+1,1,a[i]);
		cout<<ans;
	}
	else{
		sort(a+1,a+n+1);
		bool op=1;
		for(int i=1;i<=n;i++){
			if(a[i]!=i-1) op=0;
		}
		if(op) cout<<n-m;
		else solve2();
	}
	return 0;
}
