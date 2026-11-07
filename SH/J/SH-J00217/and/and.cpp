#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2010;
int n,m,ans;
int a[N];
void dfs(int id,int cnt,int res){
	if(cnt==m){
		ans=max(ans,res);
		return;
	}
	if(id>n)return;
	dfs(id+1,cnt,res);
	if(cnt==0)dfs(id+1,cnt+1,a[id]);
	else dfs(id+1,cnt+1,res&a[id]);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int maxa=0;
	for(int i=1;i<=n;i++){
		maxa=max(maxa,a[i]);
	}
	if(m==1){
		cout<<maxa;
	}
	else if(m==2){
		int res=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				res=max(res,a[i]&a[j]);
			}
		}
		cout<<res;
	}
	else if(m==n){
		int res=a[1];
		for(int i=2;i<=n;i++)res&=a[i];
		cout<<res;
	}
	else if(n<=20){
		dfs(1,0,0);
		cout<<ans;
	}
	else if(maxa<=4){
		int cnt=0;
		for(int i=1;i<=n;i++)if(a[i]==4)cnt++;
		if(cnt>=m)cout<<4;
		else{
			cnt=0;
			for(int i=1;i<=n;i++)if(a[i]==3)cnt++;
			if(cnt>=m)cout<<3;
			else{
				cnt=0;
				for(int i=1;i<=n;i++)if(a[i]==2||a[i]==3)cnt++;
				if(cnt>=m)cout<<2;
				else{
					cnt=0;
					for(int i=1;i<=n;i++)if(a[i]==1||a[i]==3)cnt++;
					if(cnt>=m)cout<<1;
					else cout<<0;
				}
			}
		}
	}
	return 0;
}
