#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){cout<<a[n];return 0;}
	if(m==2){
		long long maxx=-2e9;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				maxx=max(maxx,(long long)a[i]&a[j]);
		cout<<maxx;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	return 0;
}