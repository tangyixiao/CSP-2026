#include<bits/stdc++.h>
using namespace std;
long long n,m,q;
long long a[1000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-m];
}