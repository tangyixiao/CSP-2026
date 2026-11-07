#include<iostream>
#include<algorithm>
#include<cmath>
#define int unsigned long long
using namespace std;
const int N=2*1e5+2;
int a[N],sum[N],ans;
char ss[N];
struct edge{
	int lp,rp,len;
	char let;
}e[N],l[N],r[N];
signed main(){
	freopen("string.in","r",stdin),freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>e[i].len>>e[i].let;
		e[i].lp=sum[i]+1;
		sum[i]=sum[i-1]+e[i].len;
		e[i].rp=sum[i];
	}
	int num=sum[n]/2,nump,lp2,rp2;
	for(int i=1;i<=n;i++) if(sum>=e[i].lp&&sum<=e[i].rp) nump=i,break;
	for(int i=1;i<nump;i++) l[i].lp=e[i].lp,l[i].rp=e[i].rp,l[i].len=e[i].len,l[i].let=e[i].let;
	for(int i=n;i>nump;i--) r[n-i+1].lp=e[i]-e[i].rp,r[n-i+1].rp=sum-e[i].rp,r[n-i+1].len=e[i].len,r[n-i+1].let=e[i].let;
	l[nump].lp=e[nump].lp,l[nump].rp=num,l[nump].len=num-l[nump-1].rp,l[nump].let=e[nump].let;
	r[n-nump+1].lp=num+1,r[nump]
	cout<<ans;
	return 0;
}