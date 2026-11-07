#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
struct w{
	int l,r;
	int val;
}qu[N];
int a[N];
int L=0,n;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	a[0]=0;
	char op;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>op;
		qu[i].l=++a[i-1];
		qu[i].r=(a[i]+=a[i-1]-1); 
		qu[i].val=op-'a';
	}
	int ans=0;
	int lastl=1,lastr=qu[n].r;
	int l=1,r=qu[n].r;
	int l1=1,r1=qu[n].r;
	for(int lid=1,rid=n;l<=r;){
		l1=qu[lid].l,r1=qu[rid].r;
		l=qu[lid].r,r=qu[rid].l;
		int lpos=l,rpos=qu[n].r-r+1;
		if(lpos<rpos){
			if(qu[lid].val!=qu[rid].val) ans+=l-lastl+1;
			lastl=l+1;
			lastr=qu[n].r-lastl+1;
			lid++;
		}else if(lpos>rpos){
			if(qu[lid].val!=qu[rid].val) ans+=lastr-r+1;
			lastr=r-1;
			lastl=qu[n].r-lastr+1;
			rid--;
		}else{
			if(qu[lid].val!=qu[rid].val) ans+=l-lastl+1;
			lastl=l+1;
			lastr=r-1;
			lid++;
			rid--; 
		}
		l=qu[lid].r,r=qu[rid].l;
	}
	printf("%lld",ans);
	return 0;
} 