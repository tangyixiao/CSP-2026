#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n+5];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	cout<<a[n-m];
	return 0;
}

