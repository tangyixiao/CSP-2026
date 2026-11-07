#include<bits/stdc++.h>
using namespace std;
long long a[500004],ans[500004];
signed main(){//A
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		if(a[i]!=a[i+1]){
			ans[a[i]]=i;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}