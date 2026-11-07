#include <bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,b; 
	string s="",c;
	cin>>a;
	for (int i=0;i<a;i++)
	{
		cin>>b>>c;
		for (int i=1;i<=b;i++)
		{
			s+=c;
		}
	}
	int len=s.length(),num=0;
	for (int i=0;i<len/2;i++)
	{
		if (!(s[i]==s[len-i-1])) num++;
	}
	cout<<num;
	return 0;
}
