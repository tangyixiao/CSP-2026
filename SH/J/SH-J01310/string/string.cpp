#include <bits/stdc++.h>
using namespace std;

int n,cnt = 0;
int len[100005];
string str[100005];

void solve1()
{
	string s = "";
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= len[i];j++)
		{
			s += str[i];
		}
	}
	int l = 0,r = s.size() - 1;
	while(l < r)
	{
		if(s[l] != s[r])
		{
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt;
} 
/*
void solve2()
{
	long long sum = 0;
	for(int i = 1;i <= n;i++)
	{
		sum += len[i];
	}
	sum /= 2;
	int lsum = 0,rsum = 0,l = 1,r = n;
	while(lsum <= sum && rsum <= sum && l < r)
	{
		if(str[l] != str[r])
		{
			if(len[l] <= len[r])
			{
				if(lsum + len[l] > sum)
				{
					cnt += len
				}
			}
		}
	}
}
*/
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int maxx = -1;
	for(int i = 1;i <= n;i++)
	{
		cin >> len[i] >> str[i];
		maxx= max(len[i],maxx);
	}
	//if(maxx <= 1000)
	//{
		solve1();
	//}
	/*
	else
	{
		solve2();
	}
	*/
	return 0;
}
