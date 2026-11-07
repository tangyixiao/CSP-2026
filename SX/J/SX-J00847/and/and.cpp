#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k=0,ans=0,x,d,sum;
ll a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cin>>n>>m;
	d=n;
	while(n--){
		cin>>a[d-n];
	}
	for(int i=1;i<=d;i++){
		if(m==1){
			ans=max(ans,a[i]);
		}
		if(m==2){
			for(int j=i+1;j<=d;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		if(m==3){
			for(int j=i+1;j<=d;j++){
				for(int l=j+1;l<=d;l++){
					ans=max(ans,a[i]&a[j]&a[l]);
				}
			}
		}
		if(m==4){
			for(int j=i+1;j<=d;j++){
				for(int l=j+1;l<=d;l++){
					for(int p=l+1;p<=d;p++){
						ans=max(ans,a[i]&a[j]&a[l]&a[p]);
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}