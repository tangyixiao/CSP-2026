#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	string s = "";
	for(long long i = 0; i < n; i++)
	{
		long long a;
		char c;
		cin >> a >> c;
		for(long long j = 0; j < a; j++)
		{
			s += c; 
		}
	}
	long long l = s.length() - 1, ant = 0;
	for(long long i = 0; i <= l/2; i++)
	{
		if(s[i] != s[l - i])
		{
			ant++;
		}
	}
	cout << ant;
	return 0;
}
