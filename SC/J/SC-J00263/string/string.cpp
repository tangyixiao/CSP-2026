#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char a[N]= {};
long long cnt[N];
long long s;
int n;
long long p[N]={};
long long check(long long x,int j) {
	long long sx=0;
	long long sn=0;
	int i;
	for(i=n;i>=1;i--)if(p[i]>=x)break;
	int v=p[i]-x;
	if(a[i]!=a[j])sx+=v;
	i++;
	sn=v;
	while(sn<=x){
		if(a[i]!=a[j])sx+=cnt[i];
		sn+=cnt[i];
		if(sn>x){
			sx-=(sn-x);
			break;
		}
		i++;
	}
	return sx;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long num=0;
	for(int i=1; i<=n; i++) {
		cin>>cnt[i]>>a[i];
		num+=cnt[i];
	}
	long long u=0;
	for(int i=n; i>=1; i--) {
		p[i]=u;
		u+=cnt[i];
	}
	long long x=0;
	long long lx=0;
	s=num/2;
	int j=0;
	while(x+cnt[j+1]<=s) {
		j++;
		lx+=check(x,j);
		x+=cnt[j];
	}
	cout<<lx;
	return 0;
}