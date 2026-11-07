#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	string s="";
	int n,count,cnt=0;
	char letter;
	cin>>n;
	
	//first,we cannot append each letter to the string
	//otherwise it may cause TLE
	//but hey
	//it 's worth taking attempts
	
	for (int i=1;i<=n;i++)
	{
		cin>>count>>letter;
		
		while (count--)
		{
			s+=letter;
		}
	}
	
	for (int i=0;i<s.size()/2+1;i++)
	{
		if (s[i]!=s[s.size()-i-1])
		{
			s[i]=s[s.size()-1-i];
			cnt++;
		}
	}
	
	cout<<cnt;
	return 0;
}
