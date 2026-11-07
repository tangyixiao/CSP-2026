#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
long long a,i,j,ans=0,n;
char b;
string s="";
int main()
{
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>n>>b;
		for(int j=0;j<n;j++)
		{
			s+=b;
		}
	}
	for(i=0,j=s.length()-1;i<s.length(),j>=0;i++,j--)
	{	
		if(i>j)
		break;
		if(s[i]!=s[j])
		{
			ans++;
		}	
	}
	cout<<ans;
	return 0;
}