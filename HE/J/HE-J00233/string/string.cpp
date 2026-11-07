#include<bits/stdc++.h>
using namespace std;
string s , x;
int sum , num ;
int main ()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n , m ,sum=0;
	cin >> n ;
	for(int i = 0 ; i < n;i++)
	{
		cin >> m >> x;
		for(int l = 0 ; l < m; l++)
		{
			s +=x;
		}
		sum += m;
	}
	bool b = 1;
	for(int i = 0 ; i < sum ; i++)
	{
		if(s[i] == s[sum-1-i])
		{
			b = 0;
		}
		else
		{
			b = 1;
		}
	}
	if(b == 1)
	{
		cout << 0;
		return 0;
	}
	for(int i = 0 ; i < sum ; i++)
	{
		if(s[i] == s[sum-1-i])
		{
			num+=0;
		}
		else
		{
			num+=1;
		}
	}
	cout << num;
	return 0;
}
