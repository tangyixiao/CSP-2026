#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+5],g=n-1,b[m+5];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	long long c=a[g]&a[g-1];
	cout<<c;
	return 0;
} 