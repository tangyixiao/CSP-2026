#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],f[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	f[0]=pow(2,30)-1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,m);j>=1;j--){
			f[j]=max((f[j-1]&a[i]),f[j]);
		}
	}
	cout<<f[m];
	return 0;
}
