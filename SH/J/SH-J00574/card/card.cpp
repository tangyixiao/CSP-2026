#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
long long cnt[500005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
		cnt[i]=a[i]*i;
	}
	if (n==m) {
		for (int i=1;i<=n;i++) {
    		cout<<cnt[i]<<' ';
    	}
	}
	
	return 0;
}
