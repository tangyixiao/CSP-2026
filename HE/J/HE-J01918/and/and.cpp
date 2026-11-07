#include<bits/stdc++.h>
using namespace std;
int a[10000005],a1[10000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		a1[i]=a[n-1-i];
	}
	cout<<a[m];
	return 0;
}
