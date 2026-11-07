#include<bits/stdc++.h>
using namespace std;
struct node{
	long long l,r;
	char c;
};
int n;
vector<node>a;
long long now = 1,cnt = 0,ans = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		long long x;
		char C;
		cin>>x>>C;
		node t;
		t.l = now;
		t.r = now+x-1;
		t.c = C;
		a.push_back(t);
		now+=x;
		cnt++;
	}
	now--;
	long long s = 1,e = now,ps = 0,pe = cnt-1;
	while(ps<pe && s<=e){
		long long minsz = min(a[ps].r-s+1,e-a[pe].l+1);
		if(a[pe].c!=a[ps].c) ans+=minsz;
		s+=minsz;
		e-=minsz;
		if(s == a[ps+1].l) ps++;
		if(e == a[pe-1].r) pe--;
	}
	cout<<ans<<endl;
	return 0;
}
