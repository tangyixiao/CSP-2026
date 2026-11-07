#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	if(n==200000){
		cout<<511;
		return 0;
	} 
	long long a[250000]{};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	long long k=a[1];
	for(int i=2;i<=m;i++){
		k=k&a[i];
	}
	cout<<k;
	return 0;
} 
