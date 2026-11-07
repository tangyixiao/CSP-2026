#include<bits/stdc++.h>
using namespace std;
int a[200006];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	bool f=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4) f=false;
	}
	if(m==1){
		int ZINz=-1;
		for(int i=1;i<=n;i++){
			ZINz=max(ZINz,a[i]);
		}
		cout<<ZINz<<"\n";
	}
	else if(m==n){
		int ZINz=a[1];
		for(int i=2;i<=n;i++){
			ZINz=ZINz&a[i];
		}
		cout<<ZINz<<"\n";
	}
	else if(m==2){
		int ZINz=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ZINz=max(ZINz,a[i]&a[j]);
			}
		}
		cout<<ZINz<<"\n";
	}
	else if(f){
		int k=0;
		while(n>1){
			n/=2;
			k++;
		}
		if(m<=k){
			int z=n;
			for(int i=1;i<=m;i++) z/=m;
			cout<<a[z]<<"\n";
		}
	}
	else{
		sort(a+1,a+n+1);
		cout<<a[n-m+1]<<"\n";
	}
	return 0;
}