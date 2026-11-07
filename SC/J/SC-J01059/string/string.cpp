#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N = 2e5 + 10;
ull n, sum = 0;
string s;
ll a[N];
char c[N];
//朴素算法 
/*
void solve()
{
	cin >> n;
	s += " ";
	for(int i = 1; i <= n; i++)
	{
		int a;
		char c;
		cin >> a >> c;
		sum += a;
		while(a--)
		{
			s += c;
		}
	}
	//cout << s << endl;
	ull ans = 0, f = sum;
	sum /= 2;
	for(int i = 1; i <= sum; i++)
	{
		//cout << s[i] << " " << s[f-i +1] << endl;
		if(s[i] != s[f - i + 1])
		{
			s[f-i + 1] = s[i];
			//cout << s << endl;
			ans++;
		}
	}
	cout << ans;
}
*/
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	ull ans = 0, i = 1, j = n;
	while(i <= j)
	{
		if(c[i] != c[j])
		{
			if(a[i] == a[j])
			{
				ans += a[i];
				a[i] = 0;
				a[j] = 0;
				i++;
				j--;
			}
			else if(a[i] > a[j])
			{
				ans += a[j];
				a[i]-=a[j];
				a[j] = 0;
				j--;
			}
			else
			{
				ans +=a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}
		else
		{
			if(a[i] == a[j])
			{
				//ans += a[i];
				a[i] = 0;
				a[j] = 0;
				i++;
				j--;
			}
			else if(a[i] > a[j])
			{
				//ans += a[j];
				a[i]-=a[j];
				a[j] = 0;
				j--;
			}
			else
			{
				//ans +=a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}
	}
	cout << ans;
	return 0;
}