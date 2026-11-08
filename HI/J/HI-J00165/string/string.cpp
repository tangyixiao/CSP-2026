#include <bits/stdc++.h>
using namespace std;
int n,m,sum;
char a;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>m>>a;
		while(m>0)
		{
			s+=a;
			m--;
		}
	}
	int l = s.size();
	for(int i = 0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
