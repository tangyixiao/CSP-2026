#include<bits/stdc++.h>
using namespace std;
int c[10000000];
int s,s3=0;
int t=0;
int aa(int n,int z)
{
	int e=n-z+1;
	t++;
	for(int i=t;i<=e;i++)
	{
		s=c[i];
		for(int j=i+1;j<=n;j++)
		{
			int s2=c[j];
			s=s&s2;
			if(z>2)
			{
				z--;
				aa(n,z);
			}

		}
		s3=max(s,s3);
	}
	return s3;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
	    cin>>c[i];
	}
	int y=aa(a,b);
	cout<<y;
	return 0;
}