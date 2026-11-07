#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt,ans=0;
struct qw{
	long long a;
	string s;
}c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i].a>>c[i].s;
	}
	string as=c[1].s,bs=c[n].s;
	long long aa=c[1].a,bb=c[n].a,s;
	long long ap=1,bp=n;
	while(ap<=bp){
		if(as!=bs){
		ans+=min(aa,bb);
		}
		s=min(aa,bb);
		aa-=s;
		bb-=s;
		if(aa==0){
			aa=c[++ap].a;
			as=c[ap].s;
		}
		if(bb==0){
			bb=c[--bp].a;
			bs=c[bp].s;
		}
	}
	cout<<ans;
	return 0;
}