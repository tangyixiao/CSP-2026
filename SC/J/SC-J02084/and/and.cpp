#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[2000005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int maxn=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	int k;
	if(m==n){
		k=a[1];
		for(int i=2;i<=n;i++){
			k&=a[i];
		}
		cout<<k;
		return 0;
	}
	else if(m==1){
		cout<<maxn;
		return 0;
	}
	else if(n==1){
		cout<<a[1];
		return 0;
	}
	else if(n==2&&m==2){
		k=a[1]&a[2];
		cout<<k;
		return 0; 
	}
	else if(m==n-1){
		
	}
	else{
		int p=-1;
		for(int i=1;i<=n;i++){
			int k=a[i];
			for(int o=1;o<=n-i;o++){
				for(int u=i+o,l=2;l<=m;l++,u++){
				    k&=a[u];
				}
			}
			p=max(p,k);
		}
		cout<<p;
		return 0;
	}
	
	return 0;
}
