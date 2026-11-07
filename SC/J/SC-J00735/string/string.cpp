#include<bits/stdc++.h>
using namespace std;
freopen"string.in"stdin;
freopen"string.out"stdout;
int main(){
	long long n,sum=0,cnt=0,exm=0;
	cin>>n;
	int a[n+1];
	char b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		exm+=a[i];
	}
	char c[exm+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			c[j]=b[i];
			sum++;
		}
	}
	for(int i=0;i<exm;i++){
		if(c[i]!=c[sum-i]){
			c[i]=c[sum-i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 