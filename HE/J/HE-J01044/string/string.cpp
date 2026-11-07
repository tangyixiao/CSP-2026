#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],sum,ans=0;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],sum+=a[i];
	sum/=2;
	int l=1,r=n;
	while(l<=r){
		if(l==r){
			ans+=a[l]/2;
			break;
		}
		if(a[l]>a[r]){
			if(c[l]==c[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r]){
			if(c[l]==c[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else{
			if(c[l]==c[r]) ans+=a[l];
			l++;
			r--;
		}
	}
	cout<<sum-ans<<"\n";
	return 0;
}

