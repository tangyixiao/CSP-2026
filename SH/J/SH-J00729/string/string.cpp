#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,t=0,cnt=0,d=0;
	string s,p,q;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(long long j=0;j<x;j++){
			s[j+t]=y;
		}
		t+=x;
	}
	for(long long i=0;i<t/2;i++){
		p[i]=s[i];
	}
	for(long long i=t-1;i>=t/2;i--){
		q[i]=s[i];
	}
	for(long long i=0;i<t/2;i++){
		if(p[i]==q[i]){
			d++;
		}
		else{
			cnt++;
		}
	}
	cout<<cnt;
} 
