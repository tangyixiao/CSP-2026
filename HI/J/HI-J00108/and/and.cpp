#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200002];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int sum=a[1]&a[2];
		for(int i=3;i<=n;i++){
			sum=a[i]&sum;
		}
		cout<<sum;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]!=a[j]){
				if(mx<a[i]&a[j]) mx=a[i]&a[j];	
			}
		}
	}
	cout<<mx;
	return 0;
} 
