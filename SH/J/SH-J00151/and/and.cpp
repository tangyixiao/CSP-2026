#include <bits/stdc++.h>
using namespace std;
long long a[200010],n,m,b[32],i,j,c[200010],c1,c2[32][200010],c3l,c3[200010],t;
int main()
{
	freopen("and.in","/r",stdin);
	freopen("and.out","/w",stdout);
	b[0]=1;
	for(i=1;i<32;++i)
	{
		b[i]=b[i-1]*2;
	}
	cin>>n>>m;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		for(j=31;j>=0;--j)
		{
			if(a[i]>=b[j])
			{
				c[i]=j;
				c2[j][c2[j][0]+1]=a[i];
				++c2[j][0];
				if(j>c1)
				{
					c1=j;
				}
				break;
			}
		}
	}
//	cout<<"c1="<<c1<<"  c2[c1][0]="<<c2[c1][0]<<endl;
	for(i=1;i<=c2[c1][0];++i)
	{
		c3[i-1]=c2[c1][i];
//		cout<<"c2[c1]["<<i<<"]="<<c2[c1][i]<<endl;
	}
	c3l=c2[c1][0];
	for(i=c1;i>=0;--i)
	{
		if(c3l>=m)
		{
			sort(c3,c3+c3l);
			t=c3[c3l-1];
			for(j=c3l-2;j>=0;--j)
			{
				t=t&c3[j];
//				cout<<"c3[j]="<<c3[j]<<endl; 
			}
			break;
		}
		else
		{
			for(j=0;j<c3l;++j)
			{
				c3[j]-=b[c1];
//				cout<<"c3["<<j<<"]="<<c3[j]<<" "<<endl;
			}
			--c1;
			for(j=0;j<c2[c1][0];++j)
			{
				c3[c3l+j]=c2[c1][j+1];
			}
			c3l+=c2[c1][0];
			for(j=0;j<c3l;++j)
			{
//				cout<<"c3["<<j<<"]="<<c3[j]<<" ";
			}
			cout<<endl;
		}
	}
	cout<<t;
	return 0;
}
