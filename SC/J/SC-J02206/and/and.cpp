#include<bits/stdc++.h>
using namespace std;
long long a[200000];
long long f(long long x,int s,int e,int m){
	if(m==0){
		return x;
	}
	long long z=0;
	for(int i=s;i<e;i++){
		long long y=f(x&a[i],i+1,e+1,m-1);
		z=max(z,y);
	}
	return z;
}
int main(){
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	int n,m;
	long long res=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-m+1;i++){
		res=max(f(a[i],i+1,n-m+2,m-1),res);
	}
	cout<<res;
	return 0;
}