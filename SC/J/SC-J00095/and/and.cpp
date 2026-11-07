#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,v[N],f[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> v[i];
	}
	for(int i=0;i<=1;i++)f[i]=v[1];
	for(int i=2;i<=m;i++)f[i]=-345;
//	for(int j=1;j<=m;j++){
//		cout << f[j] << " ";
//	}cout << "\n";
	for(int i=2;i<=n;i++){
		f[0]=v[i];
		for(int j=min(i,m);j>=1;j--){
			if(f[j]==-345)f[j]=f[j-1]&v[i];
			else f[j]=max(f[j],f[j-1]&v[i]);
		}
//		for(int j=1;j<=m;j++){
//			cout << f[j] << " ";
//		}cout << "\n";
	}
	cout << f[m];
	return 0;
}