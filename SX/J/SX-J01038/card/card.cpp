#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	int n,m,a[n+1]={};
	cin>>n>>m;
	for(int i=1;i<=n+1;i++){
		cin>>a[i];
		if(a[i]!=a[i-1] && i!=1) cout<<i-1<<" ";
		if(i==n+1) cout<<i;
	}
	return 0;
}