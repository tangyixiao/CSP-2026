

#include <bits/stdc++.h>
using std::cin;using std::vector;using std::cout;using std::ios;using std::lower_bound;
#define int long long
#define fastread ios::sync_with_stdio(false),cin.tie(0);
#define freo(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout);
#define pb push_back
#define fi first
#define se second
const int maxn=200005;
int cnt[maxn];
char c[maxn];
int start[maxn];

int lcnt[maxn];
char lc[maxn];
int rcnt[maxn];
char rc[maxn];
int rstart[maxn];
signed main()
{
	freo("string.in","string.out")
	fastread
	
	int n;
	cin>>n;
	for (int i=0;i<n;i++) cin>>cnt[i]>>c[i];
	/*
	for (int i=1;i<=n;i++) start[i]=start[i-1]+cnt[i];
	int l=0,r=n-1;
	int lcnt=0,rcnt=0,cnt=0;
	while (1)
	{
		int lshift=start[l+1]-cnt;
		int rshift=start[n]-start[r-1]-cnt;
		if (lshift<rshift)
		{
			l++;
			cnt=start[l]-1;
		}
		else
		{
			r--;
			cnt=start[n]-start[r];
		}
	} 
	
	*//*
	int sum=0;
	for (int i=0;i<n;i++) sum+=cnt[i];
	for (int i=1;i<=n;i++) start[i]=start[i-1]+cnt[i];
	int mid=sum/2;
	int *_=lower_bound(start,start+n+1,mid);
	int idx=_-start;
	int cha=mid-*_;
	// int i;
	for (int i=0;i<idx;i++)
	{
		lcnt[i]=cnt[i];
		lc[i]=c[i];
	}
	lcnt[idx]=cha;
	lc[idx]=c[idx];
	rcnt[0]=cnt[idx]-cha;
	rc[0]=c[idx];
	for (int i=idx+1;i<n;i++)
	{
		rcnt[n-i-1]=cnt[i];
		rc[n-i-1]=c[i];
	}
	for (int i=1;i<maxn;i++)
	{
		rstart[i]=rstart[i-1]+rcnt[i];
	}
	
	int l=1,r=1;
	// int lsum=0,rsum=0;
	int rp=0;
	while (1)
	{
		if (l>=mid || start[l]>rstart[r])
		{
			if (lc[start[l-1]]!=rc[rstart[r-1]]) rp+=rcnt[rstart[r-1]];
			r++;
		}
		else if (r>=n-idx-2)
		{
			if (lc[start[l-1]]!=rc[rstart[r-1]]) rp+=lcnt[start[r-1]];
			l++;
		}
		else break;
	}
	cout<<rp;
	*/
	std::string x;
	for (int i=0;i<n;i++)
		for (int j=0;j<cnt[i];j++)
			x.pb(c[i]);
			
	int l=0,r=x.size()-1;
	int rp=0;
	while (l<r)
	{
		if (x[l]!=x[r]) rp++;
		l++,r--;
	}
	cout<<rp;
}
