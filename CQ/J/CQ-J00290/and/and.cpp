#include<bits/stdc++.h>
using namespace std;
int k,n,m,a[1000010],maxn,b[1000010],c[1000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;k=m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) c[i]=a[i];
	while(m>1){
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) b[i]=(c[i]&c[j]);
		m--;
		if(m<=1) break;
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) c[i]=(b[i]&b[j]);
		m--;
	}
	if(k%2!=0) for(int i=1;i<=2*n;i++) maxn=max(maxn,c[i]);
	else for(int i=1;i<=2*n;i++) maxn=max(maxn,b[i]);
	cout<<maxn;
	return 0;
}
