#include<bits/stdc++.h>
using namespace std;
struct{
	long long l,r;
	char s;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x;
	long long m=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		s[i].l=m;
		m+=x-1;
		s[i].r=m;
		m++;
		cin>>s[i].s;
	}
	int lj=1,rj=n;
	long long l=0,r=m,ans=0;
	while(l<r){
		int tong=((s[lj].s)!=(s[rj].s));
		if(rj<=lj){
			break;
		}
		if((s[lj].r-l)>=(r-s[rj].l)){
			ans+=tong*(r-s[rj].l);
			l+=(r-s[rj].l);
			r=s[rj].l;
			rj--;
		}
		else {
			ans+=tong*(s[lj].r-l);
			l=s[lj].r;
			r-=s[lj].r-l;
			lj++;
		}
		if(s[lj].r<=l)lj++;
		if(s[rj].l>=r)rj--;
	}
	cout<<ans;
	return 0;
}
//177
/*
10
1 u
44 r
8 z
14 d
14 r
41 j
1 b
20 f
13 x
21 y


81
15
81

*/



