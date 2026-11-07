#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
ll n,a[N],st[N],ed[N],cnt;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	st[1]=1;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		ed[i]=st[i]+a[i]-1;
		st[i+1]=ed[i]+1;
	}
	ll l=1,r=n,sum=ed[n];
	while(l<r){
		if(ed[l]>sum-st[r]+1){
			st[l]+=ed[r]-st[r]+1;
			cnt+=(c[l]!=c[r])*(ed[r]-st[r]+1);
			r--;
		}else if(ed[l]<sum-st[r]+1){
			ed[r]-=ed[l]-st[l]+1;
			cnt+=(c[l]!=c[r])*(ed[l]-st[l]+1);
			l++;
		}else{
			cnt+=(c[l]!=c[r])*(ed[l]-st[l]+1);
			l++;r--;
		}
	}
	cout<<cnt;
	return 0;
}
