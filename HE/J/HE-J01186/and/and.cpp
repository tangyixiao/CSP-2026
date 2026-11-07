#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200009],b[200009],n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll zd=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			zd=max(zd,a[i]);
		}
		cout<<zd;
		
	}
	ll zx=1e18;
	if(m==n){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			zx=min(zx,a[i]);
		}
		cout<<zx;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			zd=max(zd,a[i]);
		}
		ll ff=0;
		for(int i=1;i<=n;i++){
			if(a[i]==zd){
				ff++;
			}
		}
		if(ff==1){
			ll zd1=0;
			for(int j=1;j<=n;j++){
				//if(zd1<a[i]&&a[i]<zd){
				//	zd1=a[i];
				//}
			}
			cout<<zd1;
		}
		else{
			cout<<zd;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
}
