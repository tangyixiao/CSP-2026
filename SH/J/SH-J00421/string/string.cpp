#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string s;
int main ()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	int a;
	char b;
	cin>>n;
	while(n!=0)
	{
	    cin>>a>>b;
		while(a!=0)	
		{
			s=s+b;
			a--;
		}
		n--;
	}
	cout<<s<<endl;
	for(int i=0;i<s.size( );i++)
	{
		if(s[i]!=s[s.size()-i+1])
		{
			cnt++; 
		}
	}
	cout<<cnt; 
	return 0;
}
