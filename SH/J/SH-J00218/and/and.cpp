#include<bits/stdc++.h>
using namespace std;
int a[200005];
int gi_ans=0;
int n,m;
void f(int c,int s,int id)
{
	if(c==0)
	{
		gi_ans=max(gi_ans,s);
		return;
	}
	for(int li_i=id+1;li_i<=n-c+1;li_i++)
	{
		f(c-1,s&a[li_i],li_i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int li_i=1;li_i<=n;li_i++)
	{
		cin>>a[li_i];
	}
	for(int li_i=1;li_i<=n-m+1;li_i++)
	{
		f(m-1,a[li_i],li_i);
	}
	cout<<gi_ans;
	return 0;
}
