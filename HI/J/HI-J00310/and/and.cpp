#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000000];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int k=a[1];
		for(int i=2;i<=n;i++){
			k=k&a[i];
		}
		cout<<k;
		return 0;
	}
	int ma=-1e9;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ma=max(ma,a[i]&a[j]);
		}
	} 
	cout<<ma;

    return 0;
}

