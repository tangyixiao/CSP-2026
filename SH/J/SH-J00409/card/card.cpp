#include<bits/stdc++.h>
using namespace std;
int arr[500010],t[300010],t2[300010],cano[300010]; 
queue<int> q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,l;
	cin>>n>>l;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			q.push(arr[i]);
			if(t[arr[i]]==1)
			{
				bool can=0;
				int size=q.size();
				for(int j=1;j<size;j++)
				{
					int tmp=q.front();
					q.pop();
					t[tmp]--;
					if(tmp!=arr[i] && can==0)
					{
						q.push(tmp);
						t[tmp]++;
					}
					if(tmp==arr[i]) can=1;
				}
			}
			t[arr[i]]++;
		}
		bool can1=1;
		while(!q.empty())
		{
			int tmp=q.front();
			q.pop();
			if(cano[tmp]==0)
			{
				t2[tmp]++;
				cano[tmp]=1;
			}
		}
		memset(t,0,sizeof(t));
		memset(cano,0,sizeof(cano));
	}
	for(int i=1;i<l;i++)
	{
		cout<<t2[i]<<" ";
	}
	cout<<t2[l];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
