#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e5 + 5;
ll n,m,nx[N],f[N],a[N],p[N],s[N],sum,fa[N],q[N],l,r,mid,ans[N],bq[N];
struct node{
	ll x,r;
}t[N];
bool cmp(node c,node d){
	return c.r<d.r;
}
void add(ll x,ll z){for(ll i=x;i<=n;i+=(i&(-i))) s[i]+=z;}//return 
ll qry(ll x){
	sum=0;
	for(ll i=x;i;i-=(i&(-i))) sum+=s[i];
	return sum;
}
bool check(ll x,ll r){
	return t[x].r<r;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i],nx[f[a[i]]]=i,fa[i]=f[a[i]],f[a[i]]=i;
	for(ll i=1;i<=m;i++) t[i].x=i,t[i].r=f[i];
	sort(t+1,t+m+1,cmp);
	for(ll i=1;i<=m;i++) bq[t[i].r]=i;
	for(ll i=1;i<=n;i++){
		q[i]=qry(i);//cout<<q[i]<<" ";
		if(i!=f[a[i]]){
			add(i+1,i-q[i]);
			add(f[a[i]],q[i]-i);
			l=bq[f[a[i]]]-1;
			if(l!=0) ans[1]-=i-q[i],ans[l+1]+=i-q[i];//,cout<<l<<" ";
		}
	//	cout<<f[i]<<" ;"
	}
	for(ll i=1;i<=m;i++) ans[i]+=ans[i-1],p[t[i].x]=ans[i];
	for(ll i=1;i<=m;i++) cout<<p[i]+f[i]<<" ";
	return 0;
}