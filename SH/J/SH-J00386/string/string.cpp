#include <bits/stdc++.h>
#define int long long
#define fi(x) x.first
#define se(x) x.second
using namespace std;
const int N=1000005;
typedef pair<int,char> P;
int a[N];
char c[N][3];
int n;
stack<P> ql,qr;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	scanf("%lld",&n); int sum=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %s",&a[i],c[i]);
		sum+=a[i];
	}
	int mid,pos,tmp=sum;
	mid=sum/2+tmp%2,pos; sum=0;
	for(pos=0;sum<mid;pos++) sum+=a[pos]; pos--;
	if(tmp%2==0) a[pos]++,sum++,mid++;
	for(int i=1;i<=pos-1;i++) ql.push(P(a[i],c[i][0])); 
	for(int i=n;i>=pos+1;i--) qr.push(P(a[i],c[i][0]));
	if(sum-mid) qr.push(P(sum-mid,c[pos][0]));
	if(mid-(sum-a[pos])-1) ql.push(P(mid-(sum-a[pos])-1,c[pos][0]));
//	cerr<<fi(ql.front())<<' '<<se(ql.front())<<'\n';
	int ans=0;
	while(!ql.empty()&&!qr.empty())
	{
		P l=ql.top(); ql.pop();
		P r=qr.top(); qr.pop();
		int v=min(fi(l),fi(r));
		if(se(l)!=se(r)) ans+=v; 
		fi(l)-=v; fi(r)-=v;
		if(fi(l)) ql.push(l);
		if(fi(r)) qr.push(r);
	}
	cout<<ans;
	return 0;
}

