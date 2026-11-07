#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,a,d=0;
	char c;
	cin>>n;
	for (long long i=0; i<n; i++) {
		cin>>a;
		cin>>c;
		for(long long j=0; j<a; j++) {
			s+=c;
		}
	}
	int m=s.size();
	
	if(m%2==0) {
		for(long long i=0, j=m-1; i<m/2,j>=m/2; i++,j--) {
			if(s[i]!=s[j]) {
				d++;
			}

		}
	} else
		for(long long i=0, j=m-1; i<m/2,j>m/2; i++,j--) {
			if(s[i]!=s[j]) {
				d++;
			}

		}

	cout <<d;
	return 0;
}
