#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int x = 0;
	int n,z=0;
	cin >> n;
	long long l[n+5];
	string s[n+5],yy[n+5];
	for (int i = 0;i < n;i++)
	{
		cin >> l[i] >> s[i];
	}
	for (int i = 0;i < n;i++)
	{
		yy[i] = "0";
	}
	for (int i = 0;i < n;i++)
	{
		bool f = 1;
		for(int j=0;j<i;j++)
		{
			if(s[i] == yy[j])
			{
				f = 0;
			}
		}
		if(f && z <= 2)
		{
			for(int j=0;j<i;j++)
			{
				if(yy[j] == "0")
				{
					yy[j] = s[i];
				}
			}
			z++;
		}
		if(z > 3)
		{
			break;
		}
	}
	if(z == 1)
	{
		cout << 0;
	}
	else if(z == 2)
	{
		for (int i = 0;i < n;i+=2)
		{
			if(s[i] != s[n-1-i])
			{
				s[i] = s[n-1-i];
				if(l[i] <= l[n-1-i])
				{
					x+=l[i];
					l[n-2-i] -= l[i] - l[n-1-i];
				}
				else
				{
					x+=l[n-1-i];
					l[i+1] -= l[n-1-i] - l[i];
				}
			}
		}
	}
	else
	{
		for (int i = 0;i < n;i+=2)
		{
			if(s[i] != s[n-1-i])
			{
				s[i] = s[n-1-i];
				if(l[i] >= l[n-1-i])
				{
					x+=l[i];
					l[n-2-i] -= l[i] - l[n-1-i];
				}
				else
				{
					x+=l[n-1-i];
					l[i+1] -= l[n-1-i] - l[i];
				}
			}
		}
		cout << x;
	}
	return 0;
}
