#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		char c;
		cin >> x >> c;
		s.append(x,c);
	}
	unsigned long long len=s.size(),cnt=0;
	for(int i=(len+1)/2-1;i<len;i++)
	{
		if(s[i]!=s[len-1-i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

