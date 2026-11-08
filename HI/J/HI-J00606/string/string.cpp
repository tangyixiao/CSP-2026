#include <bits/stdc++.h>
using namespace std;

int n;
string s="";

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int n1;
		string s1;
		cin>>n1>>s1;
		for(int j=0; i<n1; j++)
		{
			s+=s1;
		}
	}
	return 0;
}
