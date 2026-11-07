#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[10000001],b[10000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1] && i!=1) b[a[i-1]]=i-1;
	}
	b[a[n]]=n;
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}


	return 0;
}

