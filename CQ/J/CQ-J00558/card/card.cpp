#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100005],s[100005],p[100005],t[100005];//输入 当前回合打出的牌 桌面上的牌 
int main()
{
	cin >> n >>m;
	int mx=INT_MIN;
	for (int i=1;i<=n;i++) 
	{
		cin >> a[i];
		mx=max(mx,a[i]);
	}
	int l=0;
	while(l<n)
	{
		l++;
		for (int i=1;i<=n;i++)s[i]=0;//初始化 
		for (int i=1;i<=n;i++) p[i]=0;//初始化 
		int r=0;
		for (int i=l;i<=n;i++) s[++r]=a[i];//当前回合打出的牌 
		p[1]=s[1]; 
		int sum_table=1;//桌面上一共有多少张牌 
		for (int i=2;i<=r;i++)
		{
			int id=1;
			int k=s[i];
			for (int j=i-1;j>=1;j--)
			{
				if (p[j]==k) 
				{
					id=0;
					for (int k=j;k<=sum_table;k++) p[k]=0;
					sum_table=sum_table-j;
					if (j==1) sum_table=0;
					if (sum_table<0) sum_table=0;
					p[++sum_table]=k; 
				}
				else continue;
			}
			if (id) p[++sum_table]=k;
		}
		for (int i=1;i<=r;i++) t[p[i]]++;
	}
	for (int i=1;i<=mx;i++) cout << t[i] << ' ';
	return 0;
}
