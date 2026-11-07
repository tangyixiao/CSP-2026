#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	long long n=0;
	long long m=0;
	for(int i=1;i<=b;i++){
		cin>>m;
		n=max(n,m);
	}
	cout<<n;
	return 0;
} 
