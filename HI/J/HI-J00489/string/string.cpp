#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<char> ac(n);
	vector<int> len(n);
	long long cs = 0;
	for(int i = 0;i < n;i++)
	{
		cin>>len[i]>>ac[i];
	}
	for(int i = 0;i < n / 2;i++)
	{
		if(len[i] < len[n - 1 - i])
		{
			len[i] += len[n - 1 - i] - len[i];
			len[i + 1] -= len[n - 1 - i] - len[i];
			cs += len[n - 1 - i] - len[i];
		}
		else
		{
			len[n - 1 - i] += len[i] - len[n - 1 - i];
			len[n - 1 - i - 1] -= len[i] - len[n - 1 - i];
			cs += len[i] - len[n - 1 - i];
		}
	}
	for(int i = 0;i < n / 2;i++)
	{
		if(ac[i] != ac[n - 1 - i])
			cs += len[i]; 
	}
	cout<<cs;
	return 0;
} 
