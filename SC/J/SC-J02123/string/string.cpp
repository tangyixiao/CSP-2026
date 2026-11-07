#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int n;
ll a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll len=0;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	ll t=len%2,sum=0,ans=0;
	int l=1,r=n;
	while(sum+t<len&&l<r){
		int minn=min(a[l],a[r]);
		sum+=minn*2;
		if(c[l]!=c[r]) ans+=minn;
		a[l]-=minn,a[r]-=minn;
		if(a[l]==0) ++l;
		if(a[r]==0) --r;
	}
	cout<<ans;
	return 0;
}