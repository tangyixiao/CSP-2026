#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,len,a;
string s,s1;
char c;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1; i<=n; i++) {
		scanf("%lld %c",&a,&c); 
		len+=a;
		for(int i=1; i<=a; i++) {
			s+=c;
		}
	}
	s1=s;
	std::reverse(s.begin(),s.end());
	if(s1==s) {
		printf("%d",0);
		return 0;
	}
	for(long long i=0; i<len; i++) {
		if(s[i]==s1[i])continue;
		ans++;
	}
	printf("%lld",ans/2);
	return 0;
}
