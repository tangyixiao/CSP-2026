#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[20005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
		c=max(c,a[i]);
	}
	cout<<c;
	return 0;
}