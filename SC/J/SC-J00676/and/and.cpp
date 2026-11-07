#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],f[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=m;j++)f[j]=a[i];
	}
	for(int j=2;j<=m;j++){
		for(int i=1;i<=n;i++){
			f[j]=max(f[j],f[j]&a[i]);
		}
	}
	cout<<f[m];
	return 0;
}