#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200001],m,ans,cnt,k,x[50],y[50],f[200001],z[50];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;for(int i=1;i<=n;i++)cin>>a[i];
	k=n-m;
	for(int i=30;i>=0;i--){
		for(int j=1;j<=n;j++){
			if((a[j]&(1<<i)))x[i]++;
			else y[i]++;
		}
	}
	for(int i=30;i>=0;i--){
		if(x[i]!=0){
			if(cnt+1<=m){
			if(y[i]<=k){
				k-=y[i];
			//	cnt++;
				for(int j=1;j<=n;j++){
					if(f[j])continue;
					if(!(a[j]&(1<<i))){
						f[j]=1;
						for(int k=30;k>=0;k--){
							if((a[j]&(1<<k)))x[k]--;
							else y[k]--;
						}
					}
				}
			}	
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(f[i])continue;
	//	cout<<i<<' ';
		for(int j=30;j>=0;j--){
			if(!(a[i]&(1<<j)))z[j]=1;
		}
	}
//	cout<<endl;
	for(int i=0;i<=30;i++)if(!z[i])ans+=(1<<i);
	cout<<ans;
	return 0;
}