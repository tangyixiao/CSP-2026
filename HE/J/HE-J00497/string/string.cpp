#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
int n,a[N];
char c[N];
int mid,l,r,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
	}
	l=1;r=n;
	while(l<r){
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++;r--;
		}else if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}else if(a[r]>a[l]){
			a[r]-=a[l];
			if(c[r]!=c[l]) ans+=a[l];
			l++;
		}
	}
	printf("%lld",ans);
	
	return 0;
}
