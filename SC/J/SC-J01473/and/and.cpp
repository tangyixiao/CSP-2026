#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
const int P=(1<<30)-1;
int n,m,a[N],ans=0;
void dfs(int x,int res,int cnt){
	if(x==n+1){
		if(cnt==m){
			ans=max(ans,res);
		}
		return;
	}dfs(x+1,res,cnt);
	dfs(x+1,res&a[x],cnt+1);
}
int check(int x){
	while(x>1){
		if(x%2==0){
			x/=2;
		}else{
			return 0;
		}
	}return 1;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int b1=0,b2,fl1=1,fl2=1;
	if(!check(n))fl2=0;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b1=max(b1,a[i]);
		if(!check(a[i]+1))fl1=0;
		if(a[i]!=i-1)fl2=0;
		if(i==1){
			b2=a[i];
		}else{
			b2=b2&a[i];
		}
	}
	if(m==1){
		cout<<b1;
		return 0;
	}if(m==n){
		cout<<b2;
		return 0;
	}if(n<=20){
		dfs(1,P,0);
		cout<<ans;
		return 0;
	}if(n<=2000&m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}cout<<ans;
		return 0;
	}if(fl1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}if(fl2){
		sort(a+1,a+n+1);
		ans=P;
		for(int i=n;i>=n-m+1;i--){
			ans=ans&a[i];
		}cout<<ans;
		return 0;
	}
	return 0;
}