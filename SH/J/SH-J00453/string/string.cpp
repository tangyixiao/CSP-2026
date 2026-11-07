#include<bits/stdc++.h>
using namespace std;
int n;
long long s[200001];
char c[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i]>>c[i];
		s[i]+=s[i-1];
	}
	int l=1,r=n;
	long long ls=1,rs=s[n],ans=0;
	while(ls<rs)
	{
		if(c[l]!=c[r])
		{
			if(s[l]-ls+1<=rs-s[r-1])
			{
				ans+=s[l]-ls+1;
				rs-=s[l]-ls+1;ls=s[l]+1;
				l++;
				if(rs==s[r-1])
				{r--;}
			}
			else
			{
				ans+=rs-s[r-1];
				ls+=rs-s[r-1];rs=s[r-1];
				r--;
			}
		}
		else
		{
			if(s[l]-ls+1<=rs-s[r-1])
			{
				rs-=s[l]-ls+1;ls=s[l]+1;
				l++;
				if(rs==s[r-1])
				{r--;}
			}
			else
			{
				ls+=rs-s[r-1];rs=s[r-1];
				r--;
			}
		}
	}
	cout<<ans;
}
