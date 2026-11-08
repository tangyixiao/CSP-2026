#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++)
	{
		long long a;
		string c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++)
			s+=c;
	}
	
	long long k,power,cnt=0,t=s.size();
	if(t%2==1)
	{
		k=t/2+1;
		power=2;
	}
	else
	{
		k=t/2;
		power=1;
	}
	
	for(long long i=k;i<t;i++)
	{
		if(s[i]!=s[i-power])
			cnt++;
		power+=2;
	}
	cout<<cnt;
	return 0;
}
