#include<bits/stdc++.h>
using namespace std;
int n;
long long x;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s;
	long long len=0;
	for(long long i=1; i<=n; ++i){
		cin>>x>>c;
		for(long long j=1; j<=x; ++j)
			s+=c;
		len+=x;
	}
	long long err=0;
	for(long long i=0; i<=len/2; ++i){
		if(s[i]!=s[len-i-1]) ++err;
	}
	if(len%2==0) err--;
	cout<<err;
	return 0;
}
