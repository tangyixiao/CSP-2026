#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200000]={0},ma=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			ma=max(ma,(i&j));
		}
	}
	cout<<ma;
	return 0;
}