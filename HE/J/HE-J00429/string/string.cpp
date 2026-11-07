#include<bits/stdc++.h>
using namespace std;
string s;
int n;
long long a ,sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		int x;
		char y;
		cin>>x>>y;
		for(int j = 1;j<=x;j++)
		{
			s+=y;
		}
	}
	a = s.size();
	for(long long i = 0;i<a/2;i++)
	{
		long long j = a-1-i;
		if(s[i]!=s[j])
			sum++;
	}
	cout<<sum;
	return 0;
}
