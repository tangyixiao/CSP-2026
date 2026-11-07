#include <bits/stdc++.h>
using namespace std;
int m,n,maxa;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>maxa)maxa=a[i];
	}
	cout<<(maxa+1)/pow(2,m)-1;
	return 0;
}
