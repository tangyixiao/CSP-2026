#include <bits/stdc++.h>
using namespace std;
long long n,x[200010],ans;
char c[200010],s[20];
long long m_min(long long a,long long b){
	if(a<b) return a;
	else return b;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;++i){
		scanf("%lld%s",&x[i],s);
		c[i]=s[0];
		x[i]+=x[i-1];
	}
	for(long long i=1;i<=n;++i){
		if(x[i]*2==x[n]) break;
		if(x[i]*2>x[n]){
			int fl=x[n]%2;
			++n;
			for(long long j=n;j>i;--j){
				x[j]=x[j-1]-fl;
				c[j]=c[j-1];
			}
			x[i]=x[n]/2;
			break;
		}
	}
	for(long long i=n;i;--i) x[i]-=x[i-1];
	for(long long i=1,j=n;i<j;){
		long long a=m_min(x[i],x[j]);
		if(c[i]!=c[j]) ans+=a;
		x[i]-=a;
		x[j]-=a;
		if(!x[i]) ++i;
		if(!x[j]) --j;
	}
	printf("%lld",ans);
	return 0;
} 
