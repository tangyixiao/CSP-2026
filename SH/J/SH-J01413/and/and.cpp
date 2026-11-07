#include<bits/stdc++.h>
using namespace std;//Trick||Treat!

const long long N=2e5+1;

long long a[N][35];
bool vis[N];
long long n,m;
long long sum[35];

signed main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	for(long long i=1;i<=n;i++){
		long long in;
		cin>>in;
		for(long long j=0;j<30&&in>0;j++){
			a[i][j]=in%2;
			sum[j]+=a[i][j];
			in/=2;
		}
	}
	
	long long ans=0;
	for(long long j=31;j>=0;j--){
		if(sum[j]<m) continue;
		ans+=(1<<j);
		for(long long i=1;i<=n;i++){
			if(vis[i]) continue;
			if(!a[i][j]){
				vis[i]=true;
				for(long long k=j-1;k>=0;k--){
					sum[k]-=a[i][k];
				}
			}
		}
	}
	
	cout<<ans;
	
	return 0;	
}
