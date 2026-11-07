#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int i,j,x,y,m,n,p,q,ans,num;
	char a[5]={0},b[5]={0};
	cin>>x>>a>>y>>b;
	m=(a[0]-48)*10;
	n=a[1]-48;
	p=(b[0]-48)*10;
	q=b[1]-48;
	ans=m+n;
	num=p+q;
	i=a[2]-65;
	j=b[2]-65;
	if(x!=y)
		cout<<"0000";
	else if(ans!=num)
	{
		cout<<"1000";
	}
	else if(i<=2&&j>2 || i>2&&j<=2)
	{
		cout<<"1100";
	}
	else if(i-j>1 || j-i>1)
	{
		cout<<"1110";
	}
	else if(i>j)
	{
		if(i-j==1)
			cout<<"1111";
	}
	else if(j>i)
	{
		if(j-i==1)
			cout<<"1111";
	}
	return 0;
} 