#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	for(int i=0;i<n;i++) 
	{
		int x;
		char ch;
		cin >> x >> ch;
		for(int i=0;i<x;i++)
		{
			s+=ch;
		}	
	}
	long long cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(i>=s.size()-i-1)break;
		if(s[i]!=s[s.size()-i-1])
		{
			cnt++;
		}
	}
	printf("%lld",cnt);
	fclose(stdin);
	fclose(stdout);
	return 0;
}