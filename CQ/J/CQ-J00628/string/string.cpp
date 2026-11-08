#include<bits/stdc++.h>
using namespace std;
long long s[1000005],n,l=1,k=0,d=0,num=0;
char a[10000005],r[10000005],v;
int main()
{
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>s[i]>>v;
d=d+s[i];
a[l]=v;

for(int j=d;j-d+1<s[i];j++)
{
	
	a[j]=a[j-1];
	

}
l=d+1;
}
n=d;
for(int i=n;i>=1;i--)
{
	r[i]=a[n-i+1];
}
for(int i=1;i<=n/2;i++)
{
	if(a[i]!=r[i])
	{
	num++;	
	}
	
	
}
printf("%d ",num);
}
