#include <bits/stdc++.h>
//#define int long long
using namespace std;
const int N=1;
int n,m;
int a[N],f[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=min(i,m);j++){
			f[j]=max(f[j],f[j-1]&a[i]);
		}
	}
	cout<<f[m];
	return 0;
}
