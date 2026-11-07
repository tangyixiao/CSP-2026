#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n,e,f=1;
	cin>>m>>n;
	long long a[200005];
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	sort(a+1,a+m+1,greater<int>());
	e = a[f];
	for(int i=1;i<=n;i++){
		e=e&a[i];
	}
	cout<<e;
	return 0;
}
