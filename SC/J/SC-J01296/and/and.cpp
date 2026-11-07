#include<bits/stdc++.h>
using namespace std;
#define lc p<<1
#define rc p<<1|1
int a[200010];
int sum[800010];
void up(int p){
	sum[p]=sum[lc]&sum[rc];
	return ;
}
void build(int p,int l,int r){
	if(l==r){
		sum[p]=a[l];
		return ;
	}
	int mid=(l+r)>>1;
	build(lc,l,mid);
	build(rc,mid+1,r);
	up(p);
	return ;
}
int query(int p,int l,int r,int l1,int r1){
	if(l1<=l&&r<=r1){
		return sum[p];
	}
	int mid=(l+r)>>1,ans=0;
	if(l1<=mid){
		ans=query(lc,l,mid,l1,r1);	
	}
	if(r1>mid){
		if(ans==0) ans=query(rc,mid+1,r,l1,r1);
		ans&=query(rc,mid+1,r,l1,r1);
	}
	return ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,greater<int>());
	build(1,1,n);
	int ans=0;
	if(n*m<=500000000){
		for(int i=m;i<=n;i++){
			int now=a[i];
			for(int j=i-m+1;j<i;j++){
				now&=a[j];
			}
			ans=max(ans,now);
		}
	}
	else{
		for(int i=m;i<=n;i++){
			ans=max(ans,query(1,1,n,i-m+1,i));
			if(ans>a[i]) break;
		}
	}
	cout<<ans;
	return 0;
}