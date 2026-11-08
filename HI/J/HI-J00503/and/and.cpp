#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
	cin>>n>>m;
	int z=0;
	int o=0;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		z=max(z,a&o);
		o=a;
	} 
    cout<<z;
	
	
	
	return 0;
}
