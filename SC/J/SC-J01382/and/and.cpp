#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int b,c;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b=max(a[i],a[i+1]);
		c=max(b,a[i]);
	}
	cout<<c;
	return 0;
} 