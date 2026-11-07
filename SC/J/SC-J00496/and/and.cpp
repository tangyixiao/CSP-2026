#include<iostream>
using namespace std;
int n,shu=0,le;
int s[20000][20000];
void ad(int a[20000],int b)
{
	int q;
	if(b==0)
	{
		shu++;
		return;
	}
	for(int i=0;i<n;i++)
	{
		q=a[i];
		a[i]=-1;
		s[shu][le-b]=q;
		if(q!=-1)ad(a,b-1);
		a[i]=q;
	}
	return;
}
int main()
{
	freopen("and.in",'r',stdin);
	freopen("and.out",'w',stdout);
	int m,max=-1,x;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	le=m;
	ad(a,m);
	for(int i=0;i<m;i++)
	{
		for(int j=1;j<m;j++)
		{
			x=s[i][j] and s[i][j-1];
			s[i][j]=x;
		}
		if(x>max)max=x;
	}
	cout<<max;
} 