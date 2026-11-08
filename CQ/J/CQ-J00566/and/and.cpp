#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+10;
int a[N];
int ans=0;
void dfs(int now,int sum,int cnt){
	if(now<1){
		return;
	}
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	dfs(now-1,sum,cnt);
	dfs(now-1,sum&a[now-1],cnt+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int mx=0;
	int sum[N];
	cin>>n>>m;
	cin>>a[1];
	sum[1]=a[1];
	mx=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]&a[i];
		mx=max(mx,a[i]);
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<mx;
	}else if(m==n){
		cout<<sum[n];
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else if(n<=20){
		for(int i=1;i<=n;i++){
			dfs(n,a[i],1);
		}
		cout<<ans;
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			int op=a[1];
			for(int j=2;j<=n;j++){
				if(i==j)continue;
				if(op==0)break;
				op&=a[j];
			}
			ans=max(ans,op);
		}
		cout<<ans;
	}else{
		int ret=a[n];
		int f=0;
		int cnt=1;
		for(int i=n-1;i>=1;i--){
			if(cnt==m)break;
			if((ret&a[i])==0){
				f=1;
				continue;
			}
			ret&=a[i];
			f=0;
			cnt++;
		}
		if(cnt<m or f==1)cout<<0;
		else{
			cout<<ret;
		}
	}
	return 0;
}
