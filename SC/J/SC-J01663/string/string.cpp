#include<iostream>
using namespace std;
#define N 200001
int n,a[N],i,l=1,r;
char c[N];
long long s=0,sn=0,ll=0,rl=0,d,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;for(i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		s+=a[i];
	}s>>=1;r=n;
	while(sn<s){
		d=min(s-sn,min(a[l]-ll,a[r]-rl));
		if(c[l]!=c[r])ans+=d;
		ll+=d;rl+=d;sn+=d;
		if(ll==a[l])++l,ll=0;
		if(rl==a[r])--r,rl=0;
	}cout<<ans;
	return 0;
}