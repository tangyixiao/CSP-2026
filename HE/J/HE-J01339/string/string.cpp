#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	long long T,j=0;
	cin >> T;
	string s="";
	while(T--) {
		long long n;
		char c;
		cin >> n >> c;
		j+=n;
		for(long long i=0; i<n; i++) {
			s+=c;
		}
	}
	j--;
	long long sum=0;
	for(long long i=0; i<j; i++) {
		if(s[i]==s[j]) {
			j--;
		} else {
			sum++;
			j--;
		}
	}
	cout << sum;
	return 0;
}
