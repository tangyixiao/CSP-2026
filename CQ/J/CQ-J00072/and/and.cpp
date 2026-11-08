#include<bits/stdc++.h>
using namespace std;
int sum=0,a[200010];
bool cmp(int x,int y)
{
	int cnt=0,x1=x,y1=y;
	while(x!=0)
	{
		if(x&1==1)cnt++;
		x>>=1;
	}
	int cnty=0;
	while(y!=0)
	{
		if(y&1==1)cnty++;
		y>>=1;
	}
	if(cnt==cnty)return x1>y1; 
	return cnt>cnty;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	sum=a[1];
    for(int i=2;i<=m;i++)
    {
    	sum&=a[i];
    	//cout<<a[i]<<" ";
	}
	cout<<sum;
	return 0;
}
//LOVE YKE
