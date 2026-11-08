#include<bits/stdc++.h>
using namespace std;
int ans;
string dao ,zheng;
bool f(string x)
{
	int cnt = 0;
	ans = x.size();
	ans /= 2;
	for (int i = x.size()-1; i > ans; i--)
	{
		dao += x[i];
	}
	for (int i = 0; i < ans; i++)
	{
		zheng += x[i];
	}
	for (int i = 0; i < ans ; i++)
	{
		if(zheng[i] != dao[i]) 
		{
			cnt++;
		}
	 } 
	if (cnt == 0)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string x,m;
	char c;
	cin >> n;
	for (int i = 1;i <= n; i++)
	{
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
		{
			x += c;
		}
	}
	if (f(x) == true)
	{
		cout << 0;
		return 0;
	}

	else
	{
		cout << ans;
	}

	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
