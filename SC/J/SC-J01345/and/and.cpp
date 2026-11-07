#include<bits/stdc++.h> 
using namespace std;
long long n,m,sum,f[200005],sum2;
struct l{
	long long s,ge;
};
l a[200005];
bool cnt(l x,l y){
	if(x.ge==y.ge)return x.s>y.s;
	return x.ge>y.ge;
}
bool cnt2(l x,l y){
	return x.s>y.s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].s;
		long long t=a[i].s,cnt=1;;
		while(t>0){
			if(t&1==1){
				a[i].ge++;
			}
			cnt++;
			t=t>>1;
		}
	}
	sort(a+1,a+2+n,cnt);
	sum=a[1].s;
	for(int i=2;i<=m;i++){
		sum=(sum&a[i].s);
	}
	sort(a+1,a+2+n,cnt2);
	sum2=a[1].s;
	for(int i=2;i<=m;i++){
		sum2=(sum2&a[i].s);
	}
	cout<<max(sum,sum2);
	return 0;
}