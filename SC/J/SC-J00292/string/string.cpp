#include <bits/stdc++.h>
using namespace std;
struct t
{
	long long a;
	char c;
}t[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long sum = 0 , s1 = 0;
	for(int i = 0;i < n;i++)
	{
		cin >> t[i].a >> t[i].c;
		s1+=t[i].a;
	}
	int i = 0 , j = n-1;
	while(s1>0)
	{
		if(t[i].a>t[j].a)
		{
			if(t[i].c!=t[j].c)
			{
				sum+=t[j].a;
				t[i].a-=t[j].a;
				j--;
			}
			s1 = s1-t[j].a*2;
		}
		if(t[i].a<t[j].a)
		{
			if(t[i].c!=t[j].c)
			{
				sum+=t[i].a;
				t[j].a-=t[i].a;
				i++;
			}
			s1 = s1-t[i].a*2;
		}
		if(t[i].a==t[j].a)
		{
			if(t[i].c!=t[j].c)
			{
				sum+=t[i].a;
				i++;
				j--;
			}
			s1 = s1-t[i].a*2;
		}
	}
	cout << sum;
	return 0;
}