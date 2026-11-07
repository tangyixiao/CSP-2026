#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,m,a[maxn];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int zd=0,ans;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans=a[i] & a[j];
			zd=max(ans,zd);
		}
	}
	cout<<zd;
	
	return 0;
}
