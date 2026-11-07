#include<bits/stdc++.h> 
using namespace std;
long long n,t,cnt; 
string s;
long long a[10000005];
string b[10000005];
int main()
{
	freopen("road.in","string",stdin);
	freopen("road.out","string",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++)
		{
			string s1=b[i];
			s=s+s1;
		}
	}
	t=s.size();
	while(t>=2)
	{
		if(s[s.size()-t-(s.size()-t)/2]!=s[t+(s.size()-t)/2-1])
		{
			cnt+=2;
		}
		
		t-=2;
	}
	cout<<cnt;
	return 0;
}