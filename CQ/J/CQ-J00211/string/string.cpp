#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,a[N],q[N];
char c[N];
ll ch=0;
ll ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		q[i]=a[i]+q[i-1];
	}
	ch=q[n];
	ll l=0,r=ch;
	ll z=1,y=n;
	ll zt=a[1],yt=a[n];
	while(l<r){
		zt=a[z],yt=a[y];
		ll k1=q[z]-l,k2=r-q[y-1];
		//cout<<"z:"<<z<<"y:"<<y<<"\n";
		//cout<<"k1:"<<k1<<"k2:"<<k2<<"\n";
		if(k1>=k2){
			l+=k2;
			r-=k2;
			y--;
			if(c[z]!=c[y+1]){
				ans+=k2;
			}
		}
		else if(k2>k1){
			r-=k1;
			l+=k1;
			z++;
			if(c[z-1]!=c[y]){
				ans+=k1;
			}
		}
	//	cout<<"l:"<<l<<"r:"<<r<<"ans:"<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c

*/
