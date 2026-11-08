#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
ll n,a[N],ans,q[N],h[N];
char c[N];
struct node{
	ll l,r;
	char c;
}p[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		q[i]=q[i-1]+a[i];
		p[i].l=q[i-1];
		p[i].r=q[i];
		p[i].c=c[i];
	}
	int mid=q[n]/2;
	int ql=1,qr=n;
	while(ql<qr){
		ll x=min(p[ql].r,q[n]-p[qr].l),y=min(p[ql].r-p[ql].l,p[qr].r-p[qr].l);
		if(p[ql].c!=p[qr].c)ans+=y;
		if(p[ql].r==x)p[qr].r-=y,ql++;
		else p[ql].l+=y,qr--;
		if(p[qr].r==p[qr].l)qr--;
		if(p[ql].l==p[ql].r)ql++;
	}
	cout<<ans;
	return 0;
}
