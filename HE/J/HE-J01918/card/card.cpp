#include<bits/stdc++.h>
using namespace std;
int a[500009],c[100009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>0;j--){
			a[i]==a[j];
			cout<<j<<" ";
			break;
		}
	}
	return 0;
}
