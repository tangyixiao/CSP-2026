#include <bits/stdc++.h>
using namespace std;
vector <char> m;
long long sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long a;
		char c;
		cin>>a>>c;
	    for(long long h=1;h<=a;h++)
	    {
	    m.push_back(c);
	    }
	}
	long long v=m.size()-1;
	long long j=0;
	for(int i=0;i<=v;i++)
	{
		if(m[i]!=m[v])
		{
			sum++;
		}
		if(i==v||i+1==v)
		{
			break;
		}
		v--;
	}
	cout<<sum;
	return 0; 
}
