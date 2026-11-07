#include<bits/stdc++.h>
#define ll long long
#define str string
using namespace std;
const int N=2e5+5;
int a[N],k1,k2;
char c[N];
struct node {
	char c;
	ll l,r;
};
vector<node> g1,g2;
void ef(ll a,ll b,char c) {
	int l=0,r=g2.size()-1;
	while(l<=r) {
		int mid=l+r>>1;
		if(a>=g2[mid].l) l=mid+1,k1=mid;
		else r=mid-1;
	}
	l=0,r=g2.size()-1;
	while(l<=r) {
		int mid=l+r>>1;
		if(b<=g2[mid].r) r=mid-1,k2=mid;
		else l=mid+1;
	}
}
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	ll len=0;
	for(int i=1;i<=n;++i) {
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	ll l=1,r=0;
	for(int i=1;i<=n;++i) {
		r+=a[i];
		if(r>=len/2) {
			g1.push_back({c[i],l,len/2});
			break;
		}
		g1.push_back({c[i],l,r});
		l=r+1;
	}
	l=1,r=0;
	for(int i=n;i>=1;--i) {
		r+=a[i];
		if(r>=len/2) {
			g2.push_back({c[i],l,len/2});
			break;
		}
		g2.push_back({c[i],l,r});
		l=r+1;
	}
	ll ans=len/2;
	for(auto cur:g1) {
		ll l=cur.l,r=cur.r;
		char c=cur.c;
		k1=k2=0;
		ef(l,r,c);
		for(int j=k1;j<=k2;++j) 
			if(g2[j].c==c) ans-=min(g2[j].r,r)-max(g2[j].l,l)+1;
	}
	cout<<ans;
}
/*
3
2 a 
2 b
1 c

2
2 a
3 a

3
2 a
3 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/