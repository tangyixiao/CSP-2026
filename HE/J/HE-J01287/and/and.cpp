#include<bits/stdc++.h>
using namespace std;
int a[200001],b[200001],c[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,asdc,esr,wear,qrwea;
	int n,m,i,d;
	cin>>n>>m;
	for(i=0;i<n;i++)
	  cin>>a[i];
	for(i=1;i<=n;i+=2)
	{
		d+=2*i+4*2-5;
	}
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
