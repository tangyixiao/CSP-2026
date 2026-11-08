#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
long long sum[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(long long i=1;i<=n;i++){
		cin >> a[i];
		sum[a[i]]=i;
	}
	for(long long i=1;i<=m;i++){
		cout << sum[i]<<" ";
	}
	return 0;
}
