#include<iostream>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],f[N][N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int k=min(i,m);
		for(int j=1;j<=k;j++){
			f[i][j]=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		int k=min(i,m);
		for(int j=k;j>=1;j--){
			f[i][j]=max(f[i][j],f[i-1][j-1]&a[i]);
		}
	}
	cout<<f[n][m];
	return 0;
}