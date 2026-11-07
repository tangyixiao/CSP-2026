#include<bits/stdc++.h>
using namespace std;
long long f[200005];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i];
	}
	if(m==n){
		long long ans=f[1];
		for(int i=2;i<=n;i++){
			ans=ans&f[i];
		}cout<<ans;
	}else if(m==1){
		long long maxx=0;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,f[i]);
		}cout<<maxx;
	}else if(m==2){
		long long maxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,f[i]&f[j]);
			}
		}cout<<maxx;
	}else{
		sort(f+1,f+n+1);
		int ans=f[n];
		for(int i=n-1;i>n-m;i--){
			ans=ans&f[i];
		}cout<<ans;
	}
	return 0;
} 
