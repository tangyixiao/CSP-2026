#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100086];
int t(int a)
{
	int s=0,s2=1;
	if(a%2==0)
	{
		s=1;
	}
	while(a!=0)
	{
		if(a%2==0)
		{
			s2=s2*10;
			a=a/2;
		}else{
			s=s*10+1;
			a=a/2;
		}
		
	}
	s=s*s2/10;
	return s;
}
int maxn(int a,int b)
{
	int s=0;
	if((a%2==0&&b%2==0)||(a%2!=b%2))
	{
		s=1;
	}
	while(a!=0||b!=0)
	{
		if(a==0&&b==0) break;
		if(a%10==b%10&&a%10==1)
		{
			s=s*10+1;
			a=a/10;
			b=b/10;
		}else{
			s=s*10;
			b=b/10;
			a=a/10;
		}
	}
	return s;
}
int max1=-1;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]=t(a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(maxn(a[i],a[j])>max1) max1=maxn(a[i],a[j]);
		}
	}
	int sum=0;
	int i=0;
	cout<<max1<<endl;
	while(max1!=0)
	{
		 
		sum=max1%10*pow(2,i)+sum*10;
		i++;
		max1=max1/10;
	 } 
	 cout<<sum;
	return 0;
}