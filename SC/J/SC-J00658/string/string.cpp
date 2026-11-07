#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int maxn = 2e5+10;
int n;
ll a[maxn];
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
	}
	int l=1;
	int r=n;
	ll L=a[1],R=a[n];
	ll ans=0;
	while(l<r){
		ll t=min(L,R);
		if(c[l]!=c[r]){
			ans+=t;
		}
		L-=t;
		R-=t;
		if(L==0){
			l++;
			if(l<=r){
				L=a[l];
			}
		}
		if(R==0){
			r--;
			if(r>=l){
				R=a[r];
			}
		}
	}
	printf("%lld",ans);
	return 0;
}