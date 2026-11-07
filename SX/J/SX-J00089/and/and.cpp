#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out ","w",stdout);
int m,n,ans,a[100010],b[100010],c[1000000];
cin>>m>>n;
for(int i=1;i<=m;i++) cin>>a[i];

	for(int i=1;i<=m;i++) ans=max(ans,a[i]);
	cout<<ans;
	return 0;

}
