#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("and.in","r",stdin);
	freopen("and,out","w",stdout);
	int n,m,b[20000000000000]={0},a=0;
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		cin>>a;
		for(int j=n;j>m;m--){
			cout<<a;
		}
	}

	return 0;
}