#include<bits/stdc++.h>
using namespace std;
string q;
long long n,m,z=0,l=0;
char p;
long long len=0;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1; i<=n; i++) {
		cin>>m>>p;
		len+=m;
		for(long long j=1; j<=m; j++) {
			q[z]=p;
			z++;
		}
	}
	if(len%2==0) {
		for(long long j=0; j<=len/2-1; j++) {
			if(q[j]!=q[len-1-j]) {
				l++;
			}

		}
	}else{
		for(long long j=0; j<=(len-1)/2; j++) {
			if(q[j]!=q[len-1-j]) {
				l++;
			}
		}
	}
	cout<<l;
	return 0;
}
