#include <bits/stdc++.h>
#define int long long
#define unsigned ull long long
using namespace std;
int n,m,a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxm=-1;
	for(int i=1;i<=n;i++){
		if(a[i]>a[i+1]&&a[i+1]<a[i+2])maxm=a[i+1];
	}
	cout<<maxm;
	return 0;
} 
