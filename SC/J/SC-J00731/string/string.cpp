#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
pair<int,char> s[N];
int n;
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].first>>s[i].second;
	}
	int i=1,j=n;
	while(i<=j)
	{
		if(s[i].second==s[j].second)
		{
			if(s[i].first>s[j].first)
			{
				s[i].first-=s[j].first;
				j--;
			}
			else if(s[i].first<s[j].first)
			{
				s[j].first-=s[i].first;
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
		else
		{
			if(s[i].first>s[j].first)
			{
				s[i].first-=s[j].first;
				ans+=s[j].first;
				j--;
			}
			else if(s[i].first<s[j].first)
			{
				s[j].first-=s[i].first;
				ans+=s[i].first;
				i++;
			}
			else
			{
				ans+=s[i].first;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}