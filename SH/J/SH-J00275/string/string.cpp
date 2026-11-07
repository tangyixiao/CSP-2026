#include<bits/stdc++.h>
using namespace std;
int reserve(string s1)
{
	long long cnt=0;
	for(long long i=0;i<s1.size()/2;i++)
	{
		if(s1[i]==s1[s1.size()-i-1]) continue;
		else cnt++;
	}
	return cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n=0,tmp1=0,ans=0;
	string s,tmp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp1>>tmp;
		for(int j=0;j<tmp1;j++)
		{
			s+=tmp;
		}
	}
	ans=reserve(s);
	cout<<ans<<"\n";
	return 0;
} 
