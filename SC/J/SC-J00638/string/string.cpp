#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define int long long
int n;
pair<int,char> a[1008617];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].x>>a[i].y;
	int sum=0;
	for(int i=1;i<=n;i++)sum+=a[i].x;
	int ans=0;
	//考虑直接使用一个pair保存当前的左右，显然的，每两次必定消耗一次n,时间复杂度O(n)
	pair<int,char> l,r;
	int li=0,ri=n+1;
	for(int ll=0,rr=sum+1;;)
	{
		if(l.first==0)l=a[++li];
		if(r.first==0)r=a[--ri];
		int res=min(l.x,r.x);
		bool fin=false;
		if(ll+res>sum/2)res=sum/2-ll,fin=true;
		ans+=res*(l.y==r.y?0:1);
		l.x-=res,r.x-=res;
		ll+=res,rr-=res;
//		cout<<ll<<' '<<rr<<' '<<ans<<'\n';
		if(fin)break;
	}
	cout<<ans;
	return 0;
}
/*
accepted 9:00 score:100 total score:200
*/