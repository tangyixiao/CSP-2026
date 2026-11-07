#include<bits/stdc++.h>
using namespace std;
freopen"and.in"stdin;
freopen"and.out"stdout;
int main(){
	int n,m,sum=0,maxx=0;
	cin>>n>>m;
	int a[n+1];
	long long c[n*n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[sum]=a[i] and a[j];
			sum++;
		}
	}
	for(int i=0;i<n*n;i++){
		if(c[i]<c[i+1])maxx=c[i+1];
	}
	cout<<maxx;
	return 0;
} 