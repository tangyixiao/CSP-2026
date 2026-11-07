#include<bits/stdc++.h>
using namespace std;
const int N=2e3+5;
int n,m;
long long f[N][N],a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i][1]=max(f[i-1][1],a[i]);
	}
	for(int i=2;i<=m;i++){
		f[i][i]=f[i-1][i-1]&a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=2;j--){
			if(i>j){
				f[i][j]=max(f[i-1][j],a[i]&f[i][j-1]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<f[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<f[n][m];
	return 0;
}
