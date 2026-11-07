#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[20005],x=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=2;i<=n;i++){
		if(x==m){
			cout<<a[x];
			break;
		}
		if(a[i]!=a[i-1]){
			x++;
		}
	}
	return 0;
} 