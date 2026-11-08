#include<bits/stdc++.h>
using namespace std;
int a[400005];
int sum=0;
int n,m;
int f1(int k,int ki,int kki)
{
	if(kki==m+1)
	{
		sum=max(k,sum);
		return 0;
	}
	if(ki>n)
	{
		return 0;
	}
	f1(k&a[ki],ki+1,kki+1);
	f1(k,ki+1,kki);
	return 0;
}
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
    cin>>n>>m;
    int sss=0,scs=0x7ffffff;
    int ffll=0;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	sss=max(sss,a[i]);
    	scs=scs&a[i];
    	if(a[i]>3)
    	{
    		ffll=1;
		}
    }
    if(n<=20)
    {
    	f1(a[1],1,1);
    	f1(0x7fffff,1,0);
    	cout<<sum;
	}//25
	else if(n<=2000)
	{
		if(m==1)
		{
			cout<<sss;
		}//5
		else if(m==2)
		{
			int kkk=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					if(i!=j)
					{
						kkk=max(kkk,a[i]&a[j]);
					}
				}
			}
			cout<<kkk;
			return 0;
		}//15
		else
		{
			cout<<scs;
		}//5
	}
	else
	{
		if(m==n-1)
		{
			int kkk=0;
			sort(a+1,a+n+1);
			for(int i=1;i<=n;i++)
			{
				int ksk=0x7fffff;
				for(int j=1;j<=n;j++)
				{
					if(j!=i)
					{
						ksk=ksk&a[i];
					}
				}
				kkk=max(kkk,ksk);
			}
			cout<<kkk;
		}//10
		else if(ffll==1)
		{
			int aa=0,bb=0,cc=0;
			for(int i=1;i<=n;i++)
			{
				if(a[i]==3)
				{
					aa++;
				}
				if(a[i]==2)
				{
					bb++;
				}
				if(a[i]==1)
				{
					cc++;
				}
			}
			if(aa>=m)
			{
				cout<<3;
			}
			else if(aa+bb>=m)
			{
				cout<<2;
			}
			else
			{
				cout<<1;
			}
		}//10
		else 
		{
			sort(a+1,a+n+1,cmp);
			int kkk=a[1];
			for(int i=1;i<=m;i++)
			{
				kkk=kkk&a[i];
			}
			cout<<kkk;
		}//15
	}
    return 0;
}
