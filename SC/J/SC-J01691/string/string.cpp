#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
struct node {
	ll a;
	char c;
}a[N];
ll n,ans,lx,l,rx,r,sum,mid,tmp;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
		sum+=a[i].a;
	}
	ll k=sum;
	sum/=2LL;
	for(int i=1;i<=n;i++){
		tmp+=a[i].a;
		if(tmp>sum){
			mid=i;break;
		}
	}
//	cout<<mid<<"\n";
	tmp-=a[mid].a;
	if(tmp==sum){l=mid-1LL,lx=a[l].a;}
	else{l=mid,lx=(sum-tmp);}
	r=l,rx=lx+(k%2LL==0LL?1LL:2LL);
	if(rx>a[r].a){r++;rx-=a[r-1].a;}
//	cout<<l<<" "<<lx<<" "<<r<<" "<<rx<<"\n";
	while(l>=1LL&&r<=n){
		ll lena=lx,lenb=a[r].a-rx+1LL;
		if(lena==lenb){
			if(a[l].c!=a[r].c)ans+=lena;
			l--;lx=a[l].a;
			r++;rx=1;
		}else{
			if(lena<lenb){
				if(a[l].c!=a[r].c)ans+=lena;
				l--;lx=a[l].a;
				rx+=lena;
			}else{
				if(a[l].c!=a[r].c)ans+=lenb;
				r++;rx=1LL;
				lx-=lenb;
			}
		}
//		cout<<l<<" "<<lx<<" "<<r<<" "<<rx<<" "<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
/*
11
2 a
1 b
1 a
1 b
2 c
1 b
1 a
1 b
1 a
1 c
1 a

*/