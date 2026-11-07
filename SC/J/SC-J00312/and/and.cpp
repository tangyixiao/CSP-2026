#include<bits/stdc++.h>
#define int long long
using namespace std;
int sum[2005],m,n,mx;
signed main(){
	freopen("and.in","r",stdin);
  	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>sum[i];
			mx=max(mx,sum[i]);
		}
		cout<<mx;
	}
	if(m==n){
		cin >> sum[1];
		mx=sum[1];
		for(int i=2;i<=n;i++){
			cin>>sum[i];
			mx&=sum[i];
		}
		cout<<mx;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			cin>>sum[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,sum[i]&=sum[j]);
			}
		}
		cout<<mx;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			cin>>sum[i];
		}
		int ans=sum[1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i){
					ans&=sum[j];	
				}
			}
			mx=max(mx,ans);
			ans=sum[1];
		}
		cout<<mx;
	}
	return 0;
}