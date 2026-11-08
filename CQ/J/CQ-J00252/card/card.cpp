#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005]={0},h[500005]={0},js[500005]={0},t[500005]={0};
int size(int a[])
{
	int i=1;
	while(a[i] != 0)
	{
		i++;
	}
	return i-1;
}
int add(int a[],int x)
{
	int q= size(a);
	a[q+1]=x;
	return 0;
}
int erase(int a[],int x)
{
	if(x == 0)
	{
		int q=size(a);
		a[q]=0;
	}
	else
		a[x]=0;
	return 0;
}
int read(int a[])
{
	int q=size(a);
	return a[q];
}
int find(int a[],int x)
{
	int q=size(a);
	for(int i = 1;i <= q;i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	} 
	return 0;
}
int huanyuan()
{
	for(int i = 1;i <= n;i++)
	{
		h[i]=a[i];
	}
	return 0;
}
int clean()
{
	for(int i =1;i <= n;i++)
	{
		t[i]=0;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		h[i]=a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		clean();
		huanyuan();
		for(int j = i;j <= n;j++)
		{
			if(find(t,h[j]) == 0)
			{
				t[j]=h[j];
			}
			else
			{
				for(int k = j+1;k <= n;k++)
				{
					erase(t,0);
					cout << "   " << read(t) << endl;
				}
			}
			erase(h,j);
		}
		for(int j = 1;j <= size(t)+1;j++)
		{
			js[t[j]]++;
			cout << t[j] << " ";
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << js[i] << " ";
	}
	return 0;
}
