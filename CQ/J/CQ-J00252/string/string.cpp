#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int long long a[200005],c=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	string s="";
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		char b;
		cin >> b;
		for(int j = 1;j <= a[i];j++)
		{
			s+=b;
		}
	}
	int long long q=s.size();
	if(q%2 == 0)
	{
		int w = q/2-1;
		int e = w+1;
		int r = e;
		for(int i = 1;i <= r;i++)
		{
			if(s[w] != s[e])
			{
				int t=100000;
				if(c <= t)
					c++;
				else if(c1 <= t)
					c1++;
				else if(c2 <= t)
					c2++;
				else if(c3 <= t)
					c3++;
				else if(c4 <= t)
					c4++;
				else if(c5 <= t)
					c5++;
				else
					c6++;
			}
			w--;
			e++;
		}
	}
	else
	{
		int w = q/2-1;
		int e = w+2;
		int r = w+1;
		for(int i = 1;i <= r;i++)
		{
			if(s[w] != s[e])
			{
				int t=100000;
				if(c <= t)
					c++;
				else if(c1 <= t)
					c1++;
				else if(c2 <= t)
					c2++;
				else if(c3 <= t)
					c3++;
				else if(c4 <= t)
					c4++;
				else if(c5 <= t)
					c5++;
				else
					c6++;
			}
			w--;
			e++;
		}
	}
	cout << c+c1+c2+c3+c4+c5+c6;
	return 0;
}

