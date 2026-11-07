#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],sum[35],ans,vis[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if((1<<j)&a[i])sum[j]++;
		}
	}
	
	for(int j=30;j>=0;j--){
		
		if(sum[j]>=m)ans+=(1<<j);
		else continue;
		
		//cout<<j<<" "<<sum[j]<<'\n';
		for(int i=1;i<=n;i++){
			if(vis[i])continue;
			if(((1<<j)&a[i])==0){
				for(int k=0;k<=30;k++){
					if((1<<k)&a[i])sum[k]--;
				}
				vis[i]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}