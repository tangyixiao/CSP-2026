#include <bits/stdc++.h>
using namespace std;
 struct node
 {
 	long long a;
 	char c;
 }st[200005];
 int n;
 int main()
 {
 	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	cin>>n;
 	for(int i=1;i<=n;i++)
	{
	 	cin>>st[i].a>>st[i].c;
	} 
	long long ans=0;
	int cnt=n,i=1;
	while(i<=n/2+1)
	{
		if(st[i].c!=st[cnt].c&&st[i].a>st[cnt].a)
		{
			ans+=st[i].a-st[cnt].a;
			st[i].a-=st[cnt].a;
			cnt--;
		}
		else if(st[i].c!=st[cnt].c&&st[i].a<st[cnt].a)
		{
			ans+=st[cnt].a-st[i].a;
			st[cnt].a-=st[i].a;
			st[i].a=0;
			i++;
		}
		else if(st[i].c==st[cnt].c)
		{
			if(st[i].a>st[cnt].a)
			{
				st[i].a-=st[cnt].a;
				cnt--;
			}
			else if(st[i].a<st[cnt].a)
			{
				st[cnt].a-=st[i].a;
				st[i].a=0;
				i++;
			}
			else
			{
				cnt--;
				st[i].a=0;
				i++;
			}
		}
		else if(st[i].c!=st[cnt].c&&st[i].a==st[cnt].a)
		{
			ans+=st[cnt].a;
			st[cnt].a=0;
			st[i].a=0;
			cnt--;
			i++;
		}
	}
	cout<<ans;
	return 0;
 }
