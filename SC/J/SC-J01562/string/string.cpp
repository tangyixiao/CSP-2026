#include<bits/stdc++.h>
using namespace std;
int main(){
	long long l;
	cin>>l;
	string a;
	for(int i=0;i<l;i++){
		long long n;
		char b;
		cin>>n>>b;
		for(long long j=0;j<n;j++){
			a+=b;
		}
	}
	long long len=a.size(),s=0;
	for(long long i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i])s++;
	}
	cout<<s;
	return 0;
}