#include <bits/stdc++.h>
using namespace std;

int a[100007];
#define int long long
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=-1e9;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x;
	for(int i=1;i<=n;i++){
		x=a[i]; 
		for(int j=i+1;j<=n;j++){
			if(i==j)continue;
			mx=max(mx,(x&a[j]));
		}
	}
	cout<<mx;
	return 0;
}
