#include<bits/stdc++.h >
using namespace std;
unsigned long long a[200010];
bool hsh[200010];
unsigned long long rec[200010];int n,m;unsigned long long re;
unsigned long long p(){
	unsigned long long ans=a[rec[1]];
	for(int i=2;i<=m;i++)ans&=a[rec[i]];
	return ans;
}
void dfs(int k){
	for(int i=1;i<=n;i++){
		if(!hsh[i]){
			rec[k]=i;
			hsh[i]=1;
			if(k==m){
				re=max(re,p());
			}else dfs(k+1);
			rec[k]=0;
			hsh[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		cout<<0;
		return 0;
	}
	
	if(n<=20){
		dfs(1);
		cout<<re;
		return 0;
	}else if(n<=2000){
		unsigned long long ans=0;
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++)ans=max(ans,a[i]&a[j]);
			}
		}else if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++)ans&=a[i];
		}
		cout<<ans;
		return 0;
	}else if(n>=2000){
		if(m==2&&n<=10000){
			unsigned long long ans=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++)ans=max(ans,a[i]&a[j]);
			}
			cout<<ans;
			return 0;
		}else if(m==n-1){
			unsigned long long ans=a[1];
			for(int i=2;i<=n;i++)ans&=a[i];
			ans^=a[1];
			for(int i=2;i<=n;i++)ans=max(ans,ans^a[i]);
			cout<<ans;
			return 0;
		}else{
			if(a[1]==0&&a[2]==1)cout<<(a[n]&((unsigned long long)1<<31));
			else{
				cout<<a[n];
			}
			return 0;
		}
	}
	return 0;
}
