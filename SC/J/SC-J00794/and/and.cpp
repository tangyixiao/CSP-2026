#include<iostream>
#include<cstdio>
#include<cmath>
int n[216210];
int bin[216210];
int ba[35][216212];
int tmp,max=-2147483647;
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		for(int j=0;pow(2,j)<=n[i];j++)
		{
			if(int(pow(2,j))&n[i]==1)
			{
				bin[i]++;
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		ba[31-bin[i]][ba[bin[i]][216211]]=n[i];
		ba[31-bin[i]][216211]++;
	}
	int kk=0;
	int aaaaa=0;
	int ff=0;
	for(int i=0;kk<=b;i++)
	{
		kk+=ba[i][216211];
		if(kk>0 && ff==0)
		{
			ff=1;
			aaaaa=ba[i][0];
		}
		if(ba[i][0]<ba[i][1]&&kk>b)
		{
			swap(ba[i][0],ba[i][1]);
		}
		if(i>2&&kk>b)
		{
			for(int e=0;e<ba[i][216211];e++)
			{
				for(int f=0;f<e;f++)
				{
					if(ba[i][f+1]>ba[i][f])
					{
						swap(ba[i][f+1],ba[i][f]);
					}
				}
			}
		}
	}
	for(int i=0;kk>0;i++)
	{
		kk-=ba[i][216211];
		if(kk<0)
		{
			for(int jj=0;kk<0;kk++,jj++)
			{
				aaaaa=aaaaa&ba[i][jj];
			}
		}
		else{
			for(int jj=0;jj<ba[i][216211];jj++)
			{
				if(ba[i][jj]!=0)aaaaa=aaaaa&ba[i][jj];
				
			}
		}
	}
	cout<<aaaaa;
	return 0;
}