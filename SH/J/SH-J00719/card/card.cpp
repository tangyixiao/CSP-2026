#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],b[500005],c[500005];
bool inq[300005],flag;
void solvea()
{
	for(int i=1;i<=n;i++)if(a[i]<a[i+1])ans[a[i]]=i;
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return;
}
void solveb()
{
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=a[i-1])
		{
			cnt++;
			b[cnt]=a[i];
		}
		c[cnt]++;
	}
	for(int i=1;i<=cnt;i++)
	{
		stack<int>st;
		for(int j=i;j<=cnt;j++)
		{
			if(inq[b[j]])
			{
				while(st.top()!=b[j])
				{
					inq[st.top()]=false;
					st.pop();
				}
				st.pop();
			}
			st.push(b[j]);
			inq[b[j]]=true;
		}
		while(!st.empty())
		{
			ans[st.top()]+=c[i];
			inq[st.top()]=false;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return;
}
void solvec()
{
	for(int i=1;i<=n;i++)
	{
		stack<int>st;
		for(int j=i;j<=n;j++)
		{
			if(inq[a[j]])
			{
				while(st.top()!=a[j])
				{
					inq[st.top()]=false;
					st.pop();
				}
				st.pop();
			}
			st.push(a[j]);
			inq[a[j]]=true;
		}
		while(!st.empty())
		{
			ans[st.top()]++;
			inq[st.top()]=false;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return;
}
void solved()
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=a[n] && m==2)ans[a[i]]++,ans[a[n]]++;
		else ans[a[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		flag&=(a[i-1]<=a[i]);
	}
	if(n<=5000)solvec();
	else if(m<=2)solved(); 
	else if(flag)solvea();
	else solveb();
	return 0;
}
