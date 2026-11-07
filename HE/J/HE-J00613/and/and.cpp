#include <bits/stdc++.h>
using namespace std;
vector <long long> f;
bool cmp(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b;
	cin>>a>>b;
	for(long long i=1;i<=a;i++)
	{
		long long j;
		cin>>j;
		f.push_back(j);
	}
	sort(f.begin(),f.end(),cmp);
	long long ans=f[0];
	for(long long i=1;i<=b-1;i++)
	{
		ans&=f[i];
	}
	cout<<ans;
	return 0; 
 } 
