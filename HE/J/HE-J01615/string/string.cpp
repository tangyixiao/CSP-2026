#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	string s;
	int n=0;
	int c[100000];
	char b;
	for(int i=1;i<=a;i++)
	{
		int ans;
		
		cin>>ans>>b;
		n+=ans;
		c[i]=ans;	
	}
	for(int j=1;j<=n;j++)
		{
			s+=b;
		}
	string se;
	long long ans=0;
	for(int  i=n;i>=0;i--)
	{
		se[ans]=s[i];
		ans++;
	}
	int sm=0;
	for(int  i=0;i<n;i++)
	{
		if(se[i]!=s[i])
		{
			se[i]=s[i];
			sm++;
		}
	}
	cout<<sm;
	return 0;
}
