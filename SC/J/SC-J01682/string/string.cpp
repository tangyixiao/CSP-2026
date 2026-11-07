#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0;
	cin>>n;
	string a;
	for(long long i=0;i<n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(long long j=0;j<x;j++){
			a[s]=y;
			s++;
		}
	}
	long long z=0;
	for(long long i=0;i<s/2;i++){
		if(a[i]!=a[s-i-1]){
			z=1;
			break;
		}
	}
	if(z==0){
		cout<<0;
	}else{
		long long l=0;
		for(long long i=0;i<s/2;i++){
			if(a[i]!=a[s-i-1]){
				l++;
			}
		}
		cout<<l;
	}
	return 0;
}