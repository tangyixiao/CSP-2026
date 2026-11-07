#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,m;
int a[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=0;
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		} 
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		} 
	}else if(m==n-1){
		int p=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i)p&=a[j]; 
			}
			ans=max(ans,p);
			p=0;
		} 
	}else if(m==n){
		for(int i=1;i<=n;i++){
			ans&=a[i];
		} 
	}else{
		int b[65]={};
		for(int i=1;i<=n;i++){
			int l=0,p=1;
			while(p<=a[i]){
				a[i]-=p;
				b[l]++;
				p*=2;
				l++;
			}
		}
		int p=1;
		for(int i=0;i<=65;i++){
			if(b[i]>=m)ans+=p;
			p*=2;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
