#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx=-1e9;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	if(m==n){
		int k=0;
		for(int i=1;i<=n;i++){
			k&=a[i];
		}
		cout<<k;
		return 0;
	} 
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx&a[j],a[i]&a[j]);
			}
		}
	}
	cout<<mx;
	return 0;
}