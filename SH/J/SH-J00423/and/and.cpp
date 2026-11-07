#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,m,a[maxn],ans;
bool cmp(int x,int y){
	return x>y;
} 
void dfs(int dep,int cnt,int sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(dep>n)
		return;
	dfs(dep+1,cnt+1,sum&a[dep]);
	dfs(dep+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)
			flag=0;
	}
	if(n<=20){
		for(int i=1;i<=n-m+1;i++)
			dfs(i+1,1,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==1){
		sort(a+1,a+1+n,cmp);
		cout<<a[1];
		return 0;
	}
	if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)
					continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		ans=a[2];
		for(int i=2;i<=n;i++)
			ans=ans&a[i];
		for(int j=2;j<=n;j++){
			int cnt=a[1];
			for(int i=1;i<=n;i++){
				if(i==j) continue;
				cnt=cnt&a[i];
			}
			ans=max(ans,cnt);
		}
		cout<<ans;
		return 0;
	}
	if(flag){
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=1;i<=m;i++)
			ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	cout<<a[m];
	return 0;
}
