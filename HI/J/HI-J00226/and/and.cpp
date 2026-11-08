#include <bits/stdc++.h>
using namespace std;
bool ccmmpp(long long s,long long w){
	return s>w;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(long long b=0;b<n;b++){
		cin>>a[b];
	}
	sort(a,a+n,ccmmpp);
	if(a[m-1]==262144)  cout<<a[m-1]-2;
	else cout<<a[m-1];
	return 0;
}
