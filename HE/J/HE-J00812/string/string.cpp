#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen(" string.out","w",stdout);
	long long o=0;
	long long a;
	string s;
	cin>>a;
	for(long long i=0;i<a;i++){
		long long b;
		char c;
		cin>>b>>c;
		for(long long  j=0;j<b;j++){
			s+=c;
		}
	}
	long long ss=s.size();
	for(long long i=0;i*2<ss;i++){
		if(s[i]!=s[ss-i-1]) o++;
	}
	cout<<o;
	return 0;
}
