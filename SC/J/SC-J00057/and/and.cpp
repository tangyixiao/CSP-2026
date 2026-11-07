#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,cf[66],js[66],a[200006];
int main()
{
	long long x,y,z;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	cf[0]=1;
	for(long long i=1;i<=35;i++) cf[i]=cf[i-1]*2;
	for(long long i=33;i>=0;i--){
		x=cf[i];
		for(long long j=1;j<=n;j++) if((a[j]&ans)==ans&&(a[j]&x)==x) js[i]++;
		if(js[i]>=m) ans+=x;
	}
	cout<<ans;
	return 0;
}
