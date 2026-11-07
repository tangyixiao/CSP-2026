#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool c[3000005];
		memset(c,0,sizeof c);
		for(int j=i;j<=n;j++){
			c[a[j]]= !(c[a[j]]);
		}
		for(int j=i;j<=n;j++){
			if(c[a[j]])b[a[j]]++;
		}
	}
	for(int i=i;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
