#include <bits/stdc++.h>
using namespace std;
long long a,n,cnt;
char c;
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1; i<=n; i++) {
		scanf("%lld",&a);
		cin>>c;
		for(int j=1; j<=a; j++) {
			s+=c;
		}
	}
	long long len=s.size();
	for(int i=0; i<len/2; i++) {
		if(s[i]!=s[len-i-1])cnt++;
	}
	printf("%lld",cnt);
	return 0;
}
