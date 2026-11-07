#include <bits/stdc++.h>
using namespace std;
int n,m,a[10001],g[1001][1001],b[10001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=n;j++){
			g[i][j]=a[i]%2;
		}
	}
	cout<<a[n];
	return 0;
}