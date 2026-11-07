#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=6e5+10;
int n,m;
int a[N];
int sloven20(){
	int nn=pow(2,n),ans=0;
	for(int i=0;i<=nn;i++){
		int x=i,sum=0,ret=0;
		int flag=1;
		for(int i=1;i<=n;i++){
			if(x&1){
				if(flag){
					sum=a[i];
					flag=0;
				}
				sum=sum&a[i];
				ret++;
			}
			x>>=1;
		}
		if(ret==m)ans=max(ans,sum);
	}
	return ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++)ans=max(a[i],ans);
		cout<<ans<<'\n';
	}else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans<<'\n';
	}else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
			if(i==j)continue;
			ans=max(ans,(a[i]&a[j]));
		}
		cout<<ans<<'\n';
	}else if(n<=20){
		cout<<sloven20();
	}else{
		sort(a+1,a+1+n);
		int ans=0,flag=1;
		for(int i=n;i>=n-m+1;i--){
			if(flag){ans=a[i];flag=0;}
			else ans=ans&a[i];
		}
		cout<<ans<<'\n';
	}
	return 0;
}
