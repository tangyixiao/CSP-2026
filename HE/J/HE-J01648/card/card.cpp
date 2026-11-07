#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],ans[300005],z,o;
bool b;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			ans[a[j]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i];
	}
	return 0;
}
