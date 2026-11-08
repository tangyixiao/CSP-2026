#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200001]={},s[200001]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=a[i]&a[i-1];
	}
	for(int i=2;i<=m;i++){
		s[i]=s[i]&a[i-2];
	}
	sort(s+m,s+n);
	cout<<s[n];
	return 0;
}
