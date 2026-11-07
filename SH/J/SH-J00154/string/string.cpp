#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200009;
ll n,cnt,ans;
struct Node{
	ll l,r;char c;
	bool operator<(const Node&a)const{
		return l<a.l;
	}
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll l;char c;
		cin>>l>>c;
		a[i]=(Node){cnt+1,cnt+l,c};
		cnt+=l;
	}
	for(ll i=1;i<=n;i++){
		ll l=a[i].l,r=a[i].r;
		ll p=upper_bound(a+1,a+1+n,(Node){cnt+1-l,0,'a'})-(a+1),q=upper_bound(a+1,a+1+n,(Node){cnt+1-r,0,'a'})-(a+1);
		if(p==q){ans+=(a[p].c==a[i].c?r-l+1:0);continue;}
		if(a[p].c==a[i].c) ans+=((cnt+1-l)-a[p].l+1);
		if(a[q].c==a[i].c) ans+=(a[q].r-(cnt+1-r)+1);
		for(ll j=q+1;j<p;j++)
			if(a[j].c==a[i].c) ans+=a[j].r-a[j].l+1;
	}
	cout<<(cnt-ans)/2<<'\n';
	return 0;
}
