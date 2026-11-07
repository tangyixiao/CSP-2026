#include <bits/stdc++.h>
using namespace std;
int a[200005],b,d;
int m,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin>>n;
	for(int i=1;i<=n;i++){
			cin>>a[i];
			b++;
	}
	d=(n+1)/2;
	cout<<a[d];
	return 0;