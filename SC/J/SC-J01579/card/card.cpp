#include <bits/stdc++.h>
using namespace std;
int liu[300100],liui=0;
int main()
{
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	

	int n,m;
	cin>>n>>m;
	queue<int> zong;
	
	for(int i=1;i<=n;i++)
	{
		int y;
		cin>>y;
		zong.push(y);
		
	}
	
	for(int j=1;j<=n;j++)
	{
		//每一局 
		int biao[300100][500100];
		int biao2[300100];
		queue<int> a;
		for(int p=1;p<=n;p++)
		{
			int h=zong.top();
			a.push(h);
			zong.pop();
			zong.push(h);
		}
		
		//复制一个队列并处理 
		for(int i=j;i<=n;i++)
		{
			int y=a.top();
			biao[y][1]++;//数字的个数 
			biao[y][biao[y][1]+1]=i;//每个相同数字的“第几位出现” 
			biao2[y]=biao[y][1]+1;//最新的一个这个数 
			if(biao[y][1]>1)
			{
				int pp=biao[y][biao2[y]-1+1];
				for(int l=1;l<=pp;l++)
				{
					a.pop();
				}
			}
			a.pop();
		}
		//统计 
		for(int q=1;q<=a.size();q++)
		{
			int x=a.top();
			liu[x]++;
			a.pop();
			liui=max(liui,x);
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		cout<<liu[i]<<" ";
	}
	return 0;	
} 