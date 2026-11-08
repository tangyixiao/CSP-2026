#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[10005];
	cin>>a[10005];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
	}
	cout<<a[10005];
	return 0;
} 
