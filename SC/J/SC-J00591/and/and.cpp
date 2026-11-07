#include<bits/stdc++.h>
using namespace std;
int a[200005],f[2005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		f[1][i]=a[i];
	}
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			f[i][j]=max(f[i-1][j],f[i-1][j-1]&a[i]);
		}
	}
	cout<<f[m][n];
	return 0;
}