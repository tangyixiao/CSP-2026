#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,len,l,r,sum,ans,a[200006];
char c[200006];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	l=1,r=n;
	while(l<r&&sum<=len/2){
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++;r--;
		}
		if(a[l]<a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			sum+=a[l];
			a[r]-=a[l];
			l++;
		}
		if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			sum+=a[r];
			a[l]-=a[r];
			r--;
		}
//		cout<<l<<' '<<r<<' '<<sum<<' '<<ans<<'\n';
	}
	cout<<ans;
	return 0;
}