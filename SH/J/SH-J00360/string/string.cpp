#include <iostream>
#include <cstdio>
using namespace std;
int n;
int a;
char c;
string s;
long long l,sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a >> c;
		for(int j = 1 ; j <= a ; j++)
		{
			s += c;
		}
		l += a;
	}
	for(long long i = 0 ; i < l/2 ; i++)
	{
		if(s[i] != s[l-i-1])
		{
			s[i] = s[l-i];
			sum++;
		}
	}
	cout << sum;
	return 0;
}
