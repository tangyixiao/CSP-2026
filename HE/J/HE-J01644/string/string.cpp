#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	string c="";
	for(long long i=0;i<n;i++){
		long long a;
		char b;
		cin>>a>>b;
		for(long long j=0;j<a;j++){
			s+=b;
		}
	}
	for(long long i=s.size();i>=0;i--){
		c+=s[i];
	}
	long long m=0;
	for(long long i=0;i<s.size()+1;i++){
		if(s[i]!=c[i]){
			m++;
		}
	}
	cout<<m/2;
	return 0;
	}
