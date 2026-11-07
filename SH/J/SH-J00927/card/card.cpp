#include <bits/stdc++.h>
using namespace std;

int a[500050];
int cards[500050];
int ANSWER[500050];
int play(int x,int n)
{
	int cnt=0;
	for (int i=x;i<=n;i++)
	{
		int flag=0,flagpos=0;
		for (int j=1;j<=cnt;j++)
		{
			if (cards[j]==a[i])
			{
				flag=1;
				flagpos=j;
				break;
			}
		}
		if (flag==1)
		{
			for (int j=flagpos+1;j<=cnt;j++)
			{
				cards[j]=0;
			}
		}
		else
		{
			cards[++cnt]=a[i];
		}
	}
	return cnt;
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int i=1;i<=n;i++)
	{
		int PP=play(i,n);
		for (int i=1;i<=PP;i++)
		{
			ANSWER[cards[i]]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout << ANSWER[i] << ' ';
	}
	return 0;
}

