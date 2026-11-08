#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<string>
using namespace std;
#define int long long

int n,m,a[114514],l[114514],r[114514],last[114514],ans[114514];
bool add[114514];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i < n;i++)
	{
		l[i] = i;
		cout<<"i:"<<i<<endl;
		fill(last,last+m+1,-1);
		fill(add,add+m+1,false);
		bool flag = true;
		for(int j = i;j < n;j++)
		{
			cout<<"	j:"<<j<<endl;
			if(j!=i)l[j] = j-1;
			r[j] = j+1;
			if(last[a[j]]!= -1)
			{
				if(last[a[j]] == i)flag = false;
				cout<<"	#:"<<a[j]<<"	last:"<<last[a[j]]<<"	now:"<<j<<endl;
				r[l[last[a[j]]]] = j;
				l[j] = l[last[a[j]]];
				for(int k = last[a[j]];k < j;k++)
				{
					last[a[k]] = -1;
				}
			}
			last[a[j]] = j;
			
			
			cout<<"%";
			for(int k = i;k < j;k=r[j])
			{
				if(!flag)
				{
					flag = !flag;
				}else
				{
					cout<<a[k]<<" ";
				}
			}
			cout<<endl;
			cout<<"%%";
			for(int j = i;j < n;j++)
			{
				cout<<"			l:"<<l[j]<<"  r:"<<r[j]<<endl;
			}
			cout<<endl;
		}
		for(int j = i;j < n;j++)
		{
			cout<<"			l:"<<l[j]<<"  r:"<<r[j]<<endl;
		}
		
		for(int j = i;j < n;j=r[j])
		{
			if(!flag)
			{
				flag = !flag;
			}else
			{
				if(add[a[j]])continue;
				add[a[j]] = 1;
				cout<<"ans["<<a[j]<<"]++!!"<<endl;
				ans[a[j]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout<<ans[i]<<" ";
	}
}
/*
4 3 
1 2 1 3 

10 3
3 1 2 1 3 2 3 1 2 1
*/
