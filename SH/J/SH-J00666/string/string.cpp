#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0;
	cin >> n;
	string s="";
	for(int i = 0;i<n;i++)
	{
		char c;
		int num;
		cin >>num>> c;
		while(num--)
		{
			s+=c;
			len++;
		}
		
	}
	string s2=s;
	reverse(s2.begin(),s2.end());
	long long cnt=0;
	for(int i = 0;i<len/2;i++)
	{
		if(s[i]!=s2[i])
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
