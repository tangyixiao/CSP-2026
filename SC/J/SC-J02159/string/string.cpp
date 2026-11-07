#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define up(i,a,b) for(int i=(a);i<=(int)(b);i++)
#define VI vector<int>
using namespace std;
const int NN=2e5+5;
ll n,a[NN],l,r,tl,tr,tot,ans;
char c[NN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	up(i,1,n){
		cin>>a[i]>>c[i];
		tot+=a[i];
	}
	tr=n; r=tot;
	l=a[++tl],r-=a[tr];
	ll hisl=0,hisr=0;
	while(tl<=tr){
		ll dr=tot-r;
		if(l<dr){
			if(c[tl]!=c[tr]) ans+=a[tl]-hisl;
			hisr+=a[tl]-hisl;
			hisl=0;
			l+=a[++tl];
		}else if(l>dr){
			if(c[tl]!=c[tr]) ans+=a[tr]-hisr;
			hisl+=a[tr]-hisr;
			hisr=0;
			r-=a[--tr];
		}else{
			if(c[tl]!=c[tr]) ans+=a[tl]-hisl;
			hisl=0; hisr=0;
			l+=a[++tl],r-=a[--tr];
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1 a
1 a
1 a
1 b
1 b
1 b

*/