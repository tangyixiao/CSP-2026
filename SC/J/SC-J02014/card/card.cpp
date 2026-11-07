#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500003];
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cout<<i+1000-a[i];
	}
	return 0;
} 