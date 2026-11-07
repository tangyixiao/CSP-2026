#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum = 0,cnt = 0;
	cin >>n;
	for(int i = 1;i <= n;i++)
	{
		int a;
		char c;
		cin >>a>>c;
		sum+=a;
		for(int j = 1;j <= a;j++)
		{
			s+=c;
		}
	}
	s = ' '+s;
	for(int i = 1;i <= sum/2;i++)
	{
		if(s[i]!=s[sum+1-i])cnt++;
	}
	cout <<cnt<<endl;
	return 0;
}
