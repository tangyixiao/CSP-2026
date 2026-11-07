#include<bits/stdc++.h>
using namespace std;
int a[200010],sl[200010],sr[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	bool B=1;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) B=0;
	}
	if(n<=0){
		int ans=0;
		for(int s=0;s<(1<<n);s++){
			int sum=0,cnt=(1<<30)-1;
			for(int i=0;i<=30;i++)
				if(s&(1<<i)){
					sum++;
					cnt&=a[i+1];
				}
			if(sum!=m) continue;
			ans=max(ans,cnt);
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++)
			ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0;
		sort(a+1,a+1+n,greater<int>());
		for(int i=1;i<=min(32,n);i++)
			for(int j=i+1;j<=min(32,n);j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans=(1<<30)-1;
		for(int i=1;i<=n;i++)
			ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		sl[0]=sr[n+1]=(1<<30)-1;
		for(int i=1;i<=n;i++)
			sl[i]=sl[i-1]&a[i];
		for(int i=n;i>=1;i--)
			sr[i]=sr[i+1]&a[i];
		int ans=0;
		for(int i=1;i<=n;i++)
			ans=max(ans,sl[i-1]&sr[i+1]);
		cout<<ans;
		return 0; 
	}
	if(B){
		cout<<n-m;
		return 0;
	}
	else{
		sort(a+1,a+1+n,greater<int>());
		int ans=(1<<30)-1;
		for(int i=1;i<=m;i++)
			ans&=a[i];
		cout<<ans;
	}
}