#include<bits/stdc++.h>
using namespace std;
int a[11111];
int n,m;
int main(){	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]<=a[i+1]){
			int zj=a[i];
			a[i]=a[i+1];
			a[i+1]=zj;
		}
	}
	cout<<a;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==a[j]&&i!=j){
				cout<<a[i];
				return 0;
			}
		}
	}
	cout<<a[m];
	return 0;
} 
