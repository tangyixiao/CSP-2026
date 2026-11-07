#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=200005;
ll n,a[MAXN],sum,l,r,ans;
char c[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);cin>>c[i];}
	l=1,r=n;
	while(l<r){
		ll num=min(a[l],a[r]);a[l]-=num;a[r]-=num;
		if(c[l]!=c[r]) ans+=num;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	printf("%lld",ans);
	return 0;
} 