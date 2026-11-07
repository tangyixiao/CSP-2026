#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,x=0;
	char c;
	char d[1000000000]={0};
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			d[x]==c;
			x++;
		}
	}
	for(int i=1;i<=x;i++){
		d[i]=d[i-1];
		d[i]=d[x];
	}
	cout<<d[x];
	return 0;
}