#include<iostream>
#include<string>
using namespace std;
string st;
char x;
long long m,sum = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> m;
		cin >> x;
		for(int j = 1;j <= m;j++)st += x;
	}
	long long len = st.size();
	int flag = 1;
	for(int i = 1;i <= n / 2;i++)
	{
		if(st[i] != st[len - i + 1])flag = 0;
	}
	if(len % 2 == 0)
	{
		for(int i = 1;i <= n / 2;i++)
		{
			if(st[i] != st[len - i + 1])sum++;
		}
	}
	else
	{
		for(int i = 1;i <= (n + 1) / 2;i++)
		{
			if(st[i] != st[len - i + 1])sum++;
		}
	}
	if(flag == 0)cout << sum - 1;
	else cout << sum;
	return 0;
} 