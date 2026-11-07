#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[200005],n,m,k=0,s,p,o=0;
	char d[200005],b[200005];
	cin>>n;
	cin>>a[1];
	cin>>b[1];
	m=a[1];
	k+=a[1];
	for(int h=2;h<=n;h++)
	{
		cin>>a[h];
		cin>>b[h];
		k+=a[h];
		if(m>a[h])
		m=a[h];
	}
	 
	p=1;
	for(int i=m;i>=2;i--)
	{
		if(i<m&&i>m/2)
		continue;
	int l=0;
	for(int t=1;t<=n;t++)
	{
		if(a[t]%i!=0)
		l=1; 
	}
	if(l==0)
	{
	p=i;
	for(int t=1;t<=n;t++)
	{
		a[t]=a[t]/p;
		
	}
	break;
	}
	
}
k/=p;
	for(int t=1;t<=n;t++)
	for(int i=1;i<=a[t];i++)
	{
		o++;
	d[o]=b[t];	
	}
	
	m=k/2;
	s=m;
	for(int i=1;i<=m;i++)
	{
	
	if(d[i]==d[k-i+1])
	s--;
	}
	cout<<s*p;
	return 0;
}