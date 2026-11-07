#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,s;
int a[N],f[N];
inline bool cmp(int x,int y){
	return x>y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)	cin>>a[i];
	sort(a+1,a+1+n,cmp);
	f[1]=a[1];
	for(int j=1; j<=m; j++) {
		for(int k=n; k>=1; k--) {
			f[j]=max(f[j],f[j-1]&a[k]);
		}
	}
	cout<<a[4];
	return 0;
}
/*
*/
