#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[1000005],b[1000005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[a[n]]=m;
	cout<<m;
	return 0;
}
