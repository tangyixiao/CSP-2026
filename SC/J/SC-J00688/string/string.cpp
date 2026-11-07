#include<bits/stdc++.h>
using namespace std;
struct dby
{
	int count;
	char letter;
}a[200002];
long long n,i,j,c,d,h,t,ans,maxn;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i].count>>a[i].letter;
	t=n;h=1;
	while(t>h)
	{
		if(a[h].letter==a[t].letter)
			if(a[h].count>a[t].count)
			{
				a[h].count-=a[t].count;
				t--;
			}
			else if(a[h].count==a[t].count)
			{
				h++;t--;
			}
			else
			{
				a[t].count-=a[h].count;
				h++;
			}
		else
		    if(a[h].count>a[t].count)
			{
				ans+=a[t].count;
				a[h].count-=a[t].count;
				t--;
			}
			else if(a[h].count==a[t].count)
			{
				ans+=a[h].count;
				h++;
				t--;
			}
			else
			{
			    ans+=a[h].count;
				a[t].count-=a[h].count;
				h++;
			}
	}
	cout<<ans;
	return 0;
}