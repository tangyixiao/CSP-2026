#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005],f[2005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	ll mx=0;
	ll ans=0;
	ll sum=(1<<63)-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		sum=sum&a[i];
		f[i][1]=a[i];
	}
	if(m==1)cout<<mx;
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(ans<(a[i]&a[j])){
					ans=(a[i]&a[j]);
				}
			}
		}
		cout<<ans;
	}
	else if(m==n){
		cout<<sum;
	}
	else{
		for(int j=2;j<=m;j++){
			for(int i=1;i<=n;i++){
				for(int k=1;k<i;k++){
					f[i][j]=max(f[i][j],(f[k][j-1]&a[i]));
				}
			}
		}
		for(int i=1;i<=n;i++){
			ans=max(ans,f[i][m]);	
		}
		cout<<ans;
	}
	return 0;
}
