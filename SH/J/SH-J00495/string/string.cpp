#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,d,e;
	long long a,l=0,i,j;
	string f;
	cin>>n;
	int x[n+1][2]={0};
	for(i=1;i<=n;i++)
	{
		cin>>a>>f;
		l=l+a;
		x[i][0]=a;
		x[i][1]=f[0];
		//cout<<x[i][0]<<" "<<x[i][1]<<endl;
		f.clear();
	}
	i=1;
	j=l;
	d=1;
	e=n;
	a=0;
	while(i<=j&&d<=e)
	{
		if(x[d][0]>=x[e][0])
		{
			if(x[e][1]!=x[d][1])
			a=a+x[e][0];
			i=i+x[e][0];
			j=j-x[e][0];
			x[d][0]=x[d][0]-x[e][0];
			e--;
		}
		else
		{
			if(x[e][1]!=x[d][1])
			a=a+x[d][0];
			i=i+x[d][0];
			j=j-x[d][0];
			x[e][0]=x[e][0]-x[d][0];
			d++;
		}
	}
	cout<<a;
	return 0;
}
