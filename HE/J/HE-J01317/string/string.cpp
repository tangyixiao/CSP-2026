#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
typedef long long LL;
struct Node
{
	LL cnt;
	char c;
}a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].cnt>>a[i].c;
	LL ans=0;
	int l=1,r=n;
	while(l<r)
	{
		if(a[l].c==a[r].c)
		{
			if(a[l].cnt>a[r].cnt)
			{
				a[l].cnt-=a[r].cnt;
				r--;
			}
			else if(a[l].cnt<a[r].cnt)
			{
				a[r].cnt-=a[l].cnt;
				l++;
			}
			else l++,r--;
			
			continue;
		}
		if(a[l].cnt>a[r].cnt)
		{
			ans+=a[r].cnt;
			a[l].cnt-=a[r].cnt;
			r--;
		}
		else if(a[l].cnt<a[r].cnt)
		{
			ans+=a[l].cnt;
			a[r].cnt-=a[l].cnt;
			l++;
		}
		else
		{
			ans+=a[l].cnt;
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
