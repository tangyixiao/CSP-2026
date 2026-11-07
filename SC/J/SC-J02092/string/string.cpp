#include<bits/stdc++.h>
using namespace std; 
long long n,m,a[20005],b[20005],s;
bool vis[20005];
long long jz2(long long y)
{
	long long sum=0,p=1;
    while(y!=0)
    {
    	sum+=(y%2)*p;
    	p*=10;
    	y/=2;
	}
	return sum;
}
long long jz10(long long y)
{
	long long sum=0,p=1;
    while(y!=0)
    {
    	cout<<y<<" "<<p<<" "<<sum<<endl;
    	sum+=(y%10)*p;
    	p*=2;
    	y/=10;
    	
	}
	return sum;
}
long long ad(long long l,long long r)
{
	long long p1=0,m,p2=1,ss=0;
	if(l<r){
		m=l;
		l=r;
		r=m;
	}
	long long l2=l;
	while(l2!=0){
		l2/=10;
		p1++;
	}
	for(int i=1;i<=p1;i++){
		if((l%10==1)&&(r%10==1))
			ss+=1*p2;
		p2*=10;
		l/=10;r/=10;
	}
	return ss;
}
long long dfs(int st)
{
	long long maxx=-999999999;
	if(st==m+1){
		s=0;
		for(int i=1;i<=m;i++)
			s=ad(jz2(s),jz2(b[i]));
		s=jz10(s);
		cout<<s<<endl;
		if(s>maxx){
			maxx=s;
			return maxx;
		}
	}
	for(int i=1;i<=n;i++)
		if(!vis[i])
		{
			b[st]=a[i];
			vis[i]=1;
			dfs(st+1);
			vis[i]=0;
		}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dfs(1);
	return 0;
}