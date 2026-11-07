#include <bits/stdc++.h> 
using namespace std;
struct str
{
	int a;
	char c;
}s[200005];
int n;
long long sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].a>>s[i].c;
	}
	int i=1,j=n;
	while(i<j)
	{
		if(s[i].c==s[j].c)
		{
			if(s[i].a>=s[j].a)
			{
				s[i].a-=s[j].a;
				j--;
			}
			else if(s[i].a<s[j].a)
			{
				s[j].a-=s[i].a;
				i++;
			}
		}
		else
		{
			sum+=min(s[i].a,s[j].a);
			if(s[i].a>=s[j].a)
			{
				s[i].a-=s[j].a;
				j--;
			}
			else if(s[i].a<s[j].a)
			{
				s[j].a-=s[i].a;
				i++;
			}
		}
//		i++;
//		j--;
	}
	cout<<sum;
	return 0;
}

