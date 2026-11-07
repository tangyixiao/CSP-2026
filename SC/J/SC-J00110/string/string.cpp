#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int a;
	char c;
	string s="0";
	for(int i = 0; i < n; i++)
	{
		cin >> a >> c;
		s += string(a,c);
	}
	long long l = s.size()-1;
	long long sum=0;
	for(int i = 1; i <= l/2; i++)
	{
		int j = l+1-i;
		if(s[i] != s[j])
		{
			sum++;
		}
	}
	cout << sum;
} 
