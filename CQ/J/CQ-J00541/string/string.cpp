#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[200005];
char c[200005];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n,sum=0;
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i]>>c[i],sum+=a[i];
	int l=(sum+1)/2-(sum&1),r=(sum+1)/2+1,lb=0,li=0,rb=0,ri=0,cnt=0;
	for(int i=1; i<=n; i++)
	{
		cnt+=a[i];
		if(cnt>=l && lb==0) lb=i,li=l-(cnt-a[i]); 
		if(cnt>=r && rb==0) rb=i,ri=r-(cnt-a[i]); 
	}
	cnt=0;
	while(lb>=1 || rb<=n)
	{
		int lre=li,rre=a[rb]-ri+1;
		if(lre<rre) cnt+=lre*(c[lb]!=c[rb]),ri+=lre,li=a[--lb];
		else if(lre>rre) cnt+=rre*(c[lb]!=c[rb]),li-=rre,rb++,ri=1;
		else cnt+=lre*(c[lb]!=c[rb]),li=a[--lb],rb++,ri=1;
	}
	cout<<cnt;
	return 0;
}
//膜拜W_B_Swift大佬！ RP++!祈祷自己不要挂分 

