#include<bits/stdc++.h>
#define wef(i,l,r) for(int i=l;i<=r;i++)
#define few(i,r,l) for(int i=r;i>=l;i--)
#define int long long
#define pii pair<int,int>
#define endl cout<<"\n"
using namespace std;
using ll=long long;
const int N=2e5+5;
int x[N],pre[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	wef(i,1,n) cin>>x[i]>>c[i],pre[i]=pre[i-1]+x[i];
	int nn=pre[n],mid=(nn+1)/2,p=lower_bound(pre+1,pre+1+n,mid)-pre;
	int res=0;
	if(pre[p]!=mid){
		int L=nn-pre[p]+1;
		int l=lower_bound(pre+1,pre+1+n,L)-pre;
		if(l!=p){
			if(c[l]!=c[p]) res+=pre[l]-L+1;
		}
		wef(i,l+1,p-1){
			if(c[i]!=c[p]) res+=x[i];
		}
	}
//	cout<<res<<"\n";
	wef(i,p+1,n){
		int L=nn-pre[i]+1,R=nn-pre[i-1];
		int l=lower_bound(pre+1,pre+1+n,L)-pre;
		int r=lower_bound(pre+1,pre+1+n,R)-pre;
		if(l==r){
			if(c[l]!=c[i]) res+=R-L+1;
		}
		else{
			if(c[l]!=c[i]) res+=pre[l]-L+1;
			if(c[r]!=c[i]) res+=R-pre[r-1];
		}
		wef(j,l+1,r-1){
			if(c[j]!=c[i]) res+=x[j];
		}
	}
	cout<<res;
	return 0;
}

