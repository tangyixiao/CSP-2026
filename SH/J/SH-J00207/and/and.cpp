#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000010],ans,f[2000010][10];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int j=1;j<=n;j++) f[j][1]=a[j];
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++) f[j][0]=f[j][1];
		for(int j=1;j<=n;j++){
			for(int k=j+i-1;k<=n;k++){
				f[(f[j][0]&a[k])][1]=1;
				if(i==m) ans=max(ans,(f[j][0]&a[k]));
			}
		}
	}
	cout<<ans;
	return 0;
}
