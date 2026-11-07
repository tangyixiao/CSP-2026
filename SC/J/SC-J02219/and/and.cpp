#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,m,ans,lg[35];
struct an{
	ll fir,sec;
}a[200050];

void t(){
	int i=0;
	ll ans=1;
	while(i<=31){
		lg[i]=ans;
		ans*=2;
		i++;
	}
	return;
}

void sp1(){
	int x,ans;
	cin>>x;
	ans=x;
	for(int i=2;i<=n;i++){
		cin>>x;
		ans=ans&x;
	}
	cout<<ans;
	return;
}

void sp2(){
	int x,maxn=-1;
	for (int i=1;i<=n;i++){
		cin>>x;
		if (x>maxn) maxn=x;
	}
	cout<<maxn;
	return;
}

bool com(an x,an y){
	if (x.fir!=y.fir) return x.fir<y.fir;
	return x.sec>y.sec;
}

int main(){
	t();
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if (n==m){
		sp1();
		return 0;
	}
	else if (m==1){
		sp2();
		return 0;
	}
	for (int i=1;i<=n;i++){
		cin>>a[i].sec;
		int l=0,r=31;
		while(l<r){
			int mid=(l+r)>>1;
			if (lg[mid]>a[i].sec) r=mid;
			else l=mid+1;
		}
		a[i].fir=lg[l]-a[i].sec;
	}
	sort(a+1,a+n+1,com);
	ans=a[1].sec;
	for (int i=2;i<=m;i++){
		ans=ans&a[i].sec;
	}
	cout<<ans;
	return 0;
}