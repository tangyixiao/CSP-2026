#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<stack>
using namespace std;
const int N=5e5+5,M=3e5+5;
stack<int> st;
int n,m,x[N],cnt[M];
bool book[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(book,false,sizeof(book));
		for(int j=i;j<=n;j++)
		{
			if(book[x[j]]==false)
			{
				st.push(x[j]);
				book[x[j]]=true;
			}
			else
			{
				while(st.top()!=x[j]&&(!st.empty()))
				{
					book[st.top()]=false;
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
	fclose(stdin);
	return 0;
}
