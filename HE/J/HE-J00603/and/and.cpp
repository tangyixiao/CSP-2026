#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],f[200005],ma=-1,v[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;++i){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	f[0]=ma;
	for (int i=1;i<=m;++i){
		int zd=1;
		for (int j=1;j<=n;++j){
			if(v[j]==1){
				continue;
			}
			if((f[i-1]&a[j])>=f[i]){
				f[i]=(f[i-1]&a[j]);
				zd=j;
			}
		}
		v[zd]=1;
	}
	cout<<f[m];
}
