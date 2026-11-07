#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 200010
ll n,m,a[MAXN],e[MAXN],ee[MAXN],b[MAXN],t,d[MAXN],s1,s2,p1,p2,d[MAXN];
void wh(ll w,ll h){
	if(w!=0){
	p1=a[h];p2=a[h+1];
	for(ll i=0;p1%2!=0;i++){
		e[i]=p1%2;
		p2/=2;
		s1+=1;
	}
	for(ll i=0;p2%2!=0;i++){
		ee[i]=p2%2;
		p2/=2;
		s2+=1;
	}
	for(ll i=min(s1,s2);i<=max(s1,s2);i++){
		if(e[i]==ee[i]){
			d[i]=e[i];
		}
	}
	wh(w-1,h+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
		wh(m,i);
		d[i]=t;
	}
	return 0;
}
/*
for(int i=0;i<n;i++){
		for(ll w=0;a[i]%2!=0;w++){
			b[w]=a[i]%2;
			a[i]/=2;
		}
		*/