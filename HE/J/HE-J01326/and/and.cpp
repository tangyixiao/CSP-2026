#include<bits/stdc++.h>
using namespace std;
struct rm
{
	long long sm;
	long long bh;
	bool bm[35];	
};
rm mem[200005];
bool cmp(rm x,rm y)
{
	if(x.sm!=y.sm)
		return x.sm>y.sm;
	else
		return x.bh>=y.bh;
}
long long sum;
bool da[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>mem[i].bh;
		int a=mem[i].bh,j=0;
		while(a>=0)
		{
			if(a%2==1)
			{
				mem[i].sm++;
				mem[i].bm[j]=1;		
			}	
			else
			{
				mem[i].bm[j]=0;	
			}		
			j++;	
			a=a/2;	
		}	
	}
	sort(mem+1,mem+1+n,cmp);
	for(int i=0;i<35;i++)
	{
		da[i]=mem[1].bm[i];
	}
	for(int i=2;i<=m;i++)
	{
		for(int j=0;j<35;j++)
		{
			if((da[j]==mem[i].bm[j])&&da[j]==1)
				da[j]=1;
			else
				da[j]=0;
		}
	}
	if(da[0]==1)
		sum++;
	for(int i=1;i<35;i++)
	{
		sum=sum+pow(da[i]*2,i);
		cout<<sum<<endl;
	}
	cout<<sum;
	return 0; 
} 
