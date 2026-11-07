#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]&&i==1){
			cout<<0<<" ";
			for(int j=2;j<=m;j++){
				cout<<n-m+j<<" ";
			}
			break;
		}
		else if(a[i]!=a[i+1]){
			cout<<i<<" ";
			for(int j=i;j<=m;j++){
				cout<<n-m+j<<" ";
			}
			break;
		}
		else{
			for(int j=1;j<=m;j++)cout<<n-m+j<<" ";
		}
		
	}
	
	return 0;
} 
