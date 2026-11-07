#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N],n,m,ans;
bool cmp(int x,int y){
	return x>y;
}
int sear(int l,int r,int x){
	int mid;
	while(l<=r){
		mid=(l+r)>>1;
		if(a[mid]<x) r=mid-1;
		else l=mid+1;
	}
	return r;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int l=1,r=n;
	for(int i=30;i>=0;i--){
		int id=sear(l,r,(1LL<<i));
		for(int j=l;j<=r;j++) if(a[j]&(1LL<<i)) a[j]^=(1LL<<i);
		if((id-l+1)<m){
			sort(a+l,a+r+1,cmp);
			continue;
		}
		ans+=(1LL<<i);
		r=id;
		sort(a+l,a+r+1,cmp);
	}
	cout<<ans;
	return 0;
}