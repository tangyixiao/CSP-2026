#include<bits/stdc++.h>
using namespace::std;
int m,n;
int a[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<(a[0] and a[1])and a[2];
}
