#include<bits/stdc++.h>
using namespace std;
string s,c;
int a,f;
bool j(string k)
{
	string l="";
	for(int i=k.length()-1;i>=0;i--)
	{
		l+=k[i];
	}
	if(l==k)
	{
		return 0;
	}
	return 1;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>f>>c;
		for(int i=1;i<=f;i++)
		{
			s+=c;
		}
	}
	int i=0;
	while(j(s))
	{
		s[s.length()-i-1]=s[i];
		i++;	
	}
	cout<<i;
	return 0;
} 