#include<iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200001],b[31],c[31],t=1,y=1,h=0,maxn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=10;i++)
	{c[i]=1;
	for(int l=1;l<=t;l++)c[i]*=10;
	t++;}
	for(int i=1;i<=n;i++)
	{int num=1;
	for(int l=1;l<=31;l++)
	{b[l]=a[i]%2;
	a[i]/=2;
	if(a[i]==0)break;
	num++;}
	for(int p=num;p>=1;p--)a[i]+=b[p]*c[p];}
	for(int i=1;i<=n;i++){
	for(int s=1;s<=31;s++){
	if(a[i]%c[s]==0&&a[i+1]%c[s]==0){   
	y+=c[s-1];
    a[i]/=10;}
	if(a[i]==0) break;}
	if(y>maxn)maxn=y;
	y=1;}
	cout<<maxn;
	return 0;
} 