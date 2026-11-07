#include<bits/stdc++.h>
using namespace std;
long long b[200020];
long long n,m,a;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(b+1,b+n+1);
	a=b[n];
	for(int i=n;i>=n-m+1;i--)a&=b[i];
	cout<<a;
	return 0;
}