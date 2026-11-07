#include<bits/stdc++.h>
using namespace std;
long long a[100000001];
int main () {
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	char c[10];
	int sum=0;
	cin>>n;
	for(long long  i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=1;i<=n;i++){
	    if(n%2==0)    sum=a[i]*(n/2);
		if (n%2==1)   sum=a[i]*(n-1)/2;
	}
	cout<<sum<<"\n";
	return 0;
}