#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
int n,a[N],sum,kind;
char c[N];
bool flag=true;
int32_t main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1; i<=n; i++) {
		scanf("%lld %c",&a[i],&c[i]);
		if(c[i]!=c[i-1]&&i!=1) {
			kind++;
			flag=false;
		}
		sum+=a[i];
	}
	if(flag) {
		putchar('0');
	} else {
		string s="";
		int num=0,iu=ceil(sum/2),ans=0;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=a[i];j++) {
				s+=c[i];
			}
		}
		for(int i=0;i<ceil(s.size()/2.0);i++) {
			if(s[s.size()-i]!=s[i]) {
				ans++;
			}
		}
		printf("%lld",ans);
	}
	return 0;
}
