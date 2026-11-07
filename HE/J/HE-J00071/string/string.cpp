#include<bits/stdc++.h>
using namespace std;
long long k[100005];
char t[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>k[i];
		cin>>t[i];
		for(long long j=1;j<=k[i];j++)
		{
			s+=t[i];
		}
	}
	long long ans=0;
	long long len=s.size();
	if(len%2==0)
	{
		for(int i=1;i<=len/2;i++)
		{
			if(s[i-1]!=s[len-i])
			{
				ans++;
			}
		}
	}
	else
	{
		for(long long i=1;i<=len/2+1;i++)
		{
			if(s[i-1]==s[len-i])
			{
				
			}
			else
			{
				ans++; 
			}
		}
	}
	cout<<ans;
	return 0;
} 


