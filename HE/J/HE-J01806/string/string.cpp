#include<bits/stdc++.h>
using namespace std;
int n,sum=0,l,minn=INT_MAX;
bool b[101000101];
string s,m,x="";
void hw()
{
	x="";
	for(int i=l-1;i>=0;i--) x+=s[i];
}
void dfs(int step)
{
	for(int i=step;i<l;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			sum++;
			s[i]='a';
			hw();
			if(s==x)
			{
				minn=min(minn,sum);
				sum=0;
			} 
			else dfs(i++);
			b[i]=0;
			sum--;
		}
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char b;
		cin>>a;
		cin>>m;
		b=m[0];
		for(int j=1;j<=a;j++) s+=b;
	}
	l=s.size();
	hw();
	if(s==x) 
	{
		cout<<0;
		return 0;
	}
	else dfs(0);
	cout<<minn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
