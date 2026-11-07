#include<iostream>
using namespace std;
const int N=5e5+10;
int n,m,a[N],c,v,k[N],b[N];
void fun1(int y)
{
	int z1=-1;
	for(int i=1;i<=c;++i)
	{
		if(b[i]==y)
		{
			z1=i;
			break;
		} 
	}
	if(z1!=-1)
	{
		for(int i=z1;i<=c;++i)
	    {
	    	b[i]=0;
	    }
	    b[z1]=y;
	    c=z1;
	}else{
		c++;
		b[c]=y;
	}
}
void fun2()
{
	for(int i=1;i<=c;++i)
	{
		k[b[i]]++;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",a+i);
	}
	for(int i=1;i<=n;++i)
	{
		for(int x=1;x<=c;++x) b[x]=0;
		c=0;
		for(int j=i;j<=n;++j)
		{
			fun1(a[j]);
		}
		fun2(); 
	}
	for(int i=1;i<=m;++i)
	{
		printf("%d ",k[i]);
	}
	return 0;
}