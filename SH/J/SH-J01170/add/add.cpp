#include <bits/stdc++.h>
using namespace std;
	cmp(int s,int o)
	{
		return s>o;
	};

int main()
{
	int n,m,c=0,o,cun,ab,bb;
	cin>>n>>m;
	int a[200009];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 sort(a,a+n,cmp);
	 for(int i=0;i<m;i++)
	 {
	 	c=a[i];
	 	for(int j=0;pow(2,j)<m;j++)
	 	{
	 		o=j;
		 }
	 	while(c>0)
	 	{
	 		if(pow(2,o)<c)
	 		{
	 			c-=pow(2,o);
	 			cun=cun*10+1;
			 }
			 else
			 {
			 	cun=cun*10;
			 }
			 o--;
		 }
		 a[i]=cun;
	 }
	 cun=0;
	 for(int i=0;i<m;i++)
	 {
	 	while(a[i]!=0)
	 	{
	 		ab=a[i]%10;
	 		bb=a[i+1]%10;
	 		if(ab+bb==2)
	 		cun=cun*10+1;
	 		else
	 		cun*=10;
		 }
		 a[i+1]=cun;
	 }
	 cun=a[m-1];
	 cout<<cun;
	return 0;
}


