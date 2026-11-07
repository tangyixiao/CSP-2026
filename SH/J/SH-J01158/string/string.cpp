#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long sum=0;
	long long cnt=0;
	for(long long i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		sum+=a;
		for(long long i=1;i<=a;i++)
		{
			s+=b;
		}
	}
	long long len=s.size();
	for(long long  i=0;i<s.size();i++)
	{
		if(s[i]!=s[len-1-i])
		{
			cnt++;
			//cout<<s[i]<<" "<<s[len-i-1]<<" "<<i<<" "<<(len-i-1)<<endl;
			s[len-i-1]=s[i];
			
			
		} 
	}
	cout<<cnt;
	return 0;
} 

