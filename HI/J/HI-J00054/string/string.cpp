#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	char ans[2000005] = {0};
	int time = 0;
	for(int i = 0;i < n;i++)
	{
		int a;
		char b;
		cin >> a >> b;
		for(int j =0;j < a;j++)
		{
			ans[time] = b;
			time++;
		}
	}
	int ans1 = 0;
	time--;
	if(time % 2 != 0)
	{
		int ka = ((1+time)/2)-1;
		int ka1 = ka + 1;
		if(ans[ka] != ans[ka1])
		{
			ans1++;
		}
		ka--;
		ka1++;
		for(int i = ka1;i <= time;i++)
		{
			if(ans[i] == ans[ka])
			{
				ans1 = ans1;
			}
			else
			{
				ans1++;
			}
			ka--;
		}
	}
	else
	{
		int ka = time/2;
		int ka1 = ka;
		ka1--;
		for(int i = ka+1;i <= time;i++)
		{
			if(ans[i] == ans[ka1])
			{
				ans1 = ans1;
			}
			else
			{
				ans1++;
			}
			ka1--;
		}
	}
	cout << ans1;
	return 0;
} 
