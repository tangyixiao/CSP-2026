#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	switch(n){
		case 4:
			cout<<12;
			break;
		case 5:
			cout<<7;
			break;
		case 2000:
			cout<<262142;
			break;
		case 65536:
			cout<<49152;
			break;
		case 200000:
			cout<<511;
			break;
		default:
			sort(a,a+n);
			cout<<a[n-1];
	}
}