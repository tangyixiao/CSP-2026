#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,wei = 0;cin >> n;
	for ( int i = 1;i <= n;i++ ){
		long long m;cin >> m;
		char ch;cin >> ch;
		wei = wei + m;
		for ( long long j = 1;j <= m;j++ ){
			s = s + ch;
		}
	}
	long long sum = 0;
	for ( long long i = 0;i <= wei/2;i++ ){
		if ( s[i] != s[wei-1-i] ){
			sum++;
		}
	}
	cout << sum;
	return 0;
}
