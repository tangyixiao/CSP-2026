#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],c[200005],s[200005];
stack<int>st;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
 	cin>>n>>m;
 	for(int i=1;i<=n;i++)cin>>a[i];
 	for(int i=1;i<=n;i++)
 	{
 		memset(c,0,sizeof c);
 		for(int j=i;j<=n;j++)
 		{
 			if(c[a[j]]==0)
			{
			    c[a[j]]++;
			    st.push(a[j]);
			}
 			else 
			{
			    while(!st.empty()&&st.top()!=a[j])
			    {
			    	c[st.top()]--;
			 	    st.pop();
			    }
			}
		}
		while(!st.empty())
		{
			s[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<s[i]<<" ";
}
