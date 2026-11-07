#include <bits/stdc++.h>
using namespace std;

int n,a;
string s,z;
long long len;
long long ans;
void solve1(int n) {
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		cin >>z;
		for(int j=0;j<a;j++)
		{
			s+=z;
		}
		len+=a;
	}
	for(long long i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1]) ans++;
	}
	printf("%lld\n",ans);
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	if(n<=10) solve1(n);
	return 0;
}
