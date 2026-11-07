#include <bits/stdc++.h>
using namespace std;
int n;
unsigned long long ans;
pair<int,char>t[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int p=1;p<=n;p++)
	{
		cin >> t[p].first >> t[p].second;
	}
	int l=1,r=n,c=0;
	while(l<r)
	{
		if(t[l].first>t[r].first)
		{
			if(t[l].second==t[r].second)
			{
				t[l].first-=t[r].first;
				r--;
				continue;
			}
			ans+=t[r].first;
			t[l].first-=t[r].first;
			r--;
		}
		else if(t[l].first<t[r].first) 
		{
			if(t[l].second==t[r].second)
			{
				t[r].first-=t[l].first;
				l++;
				continue;
			}
			ans+=t[l].first;
			t[r].first-=t[l].first;
			l++;	
		}
		else
		{
			if(t[l].second!=t[r].second)
			{
				ans+=t[r].first;
			}
			l++;
			r--;
		}
	}
	cout << ans << "\n";
	return 0;
}
