#include<bits/stdc++.h>
using namespace std;
long long a[200100];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int b=n/2;
	if(n%2==0){
		cout<<(a[b]+a[b+1])/2;
	}
	else{
		cout<<a[b+1];
	}
	return 0;
}
