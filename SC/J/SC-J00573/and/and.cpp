#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mx=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			int p=a[i]&a[j];
			if(p>mx) mx=p;
		} 
	}
	cout<<mx;
}