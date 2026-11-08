#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],ss,mx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		for(int i=2;i<=n;i++){
			a[i]&=a[i-1];
		}
		cout<<a[n];
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ss=a[i];
				ss&=a[j];
			}
			mx=max(mx,ss);
		}
		cout<<mx;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			ss=a[i];
			for(int j=1;j<=n;j++){
				if(a[j]!=a[i]){
					ss&=a[j];
				}
			}
			mx=max(mx,ss);
		}
		cout<<mx;
	}
	for(int i=1;i<=n-m;i++){
		ss=a[i];
		for(int j=i+1;j<=i+m;j++){
			ss&=a[j];
		}
		mx=max(mx,ss);
	}
	cout<<mx;
	return 0; 
} 
