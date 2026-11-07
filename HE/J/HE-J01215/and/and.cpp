#include<bits/stdc++.h>
using namespace std;
const int N=2e3+50;
long long n,m,a[N],f[N][N],maxx=-1,k,ma=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];maxx=max(maxx,a[i]);
		if(i==1) k=a[i];
		else k&=a[i];
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		cout<<k;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ma=max(ma,a[i]&a[j]);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout<<f[i][j]<<' ';
//		}
//		cout<<'\n';
//	}
	cout<<ma;
	return 0;
}
