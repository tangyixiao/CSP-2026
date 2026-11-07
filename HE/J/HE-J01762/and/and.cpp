#include<bits/stdc++.h>
using namespace std;
int n,m; 
int a[200005];
char e[200005],top = 1;//按位与
int s[200005],t = 1; 
//按位与
void an(int x,int y)
{ 
	//一位一位求
	while(x > 0 && y > 0)
	{
		int nx,ny;
		nx = x % 2;
		ny = y % 2;
		if(nx == ny)
		{
			e[top ++] = 1;	
		}
		else
		{
			e[top ++] = 0;
		} 
		x /= 2;
		y /= 2;
	}	
	return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//输入n,m
	scanf("%d%d",&n,&m);
	int maxn = 0;
	for(int i = 1;i <= n;i ++)
	{
		scanf("%d",&a[i]);
		maxn = max(maxn,a[i]);
	}
	if(m == 1)
	{
		//输出最大值 
		cout << maxn;
		return 0;
	}
	else
	{
		maxn = 0;
		//m = 2
		for(int i = 1;i <= n;i ++)
		{
			for(int j = 1;j <= n;j ++)
			{
				//清空
				for(int q = 1;q <= t;q ++)
				{
					e[q] = s[q] = 0;	
				} 
				top = t = 1;
				if(i == j)
				{
					continue;
				}
				an(a[i],a[j]);
				top --;
				//得出按位与数组，长度为top 
				for(int w = top;w >= 1;w --)
				{
					s[t ++] = e[w];
				}	
				t --;	
				//得出数
				int erj = 1,sum = 0;
				for(int w = 1;w < t;w ++)
				{
					sum += s[w] * erj;
					erj *= 2;
				} 
				maxn = max(maxn,sum);
			}
		} 
	}
	cout << maxn;
	return 0;
}
