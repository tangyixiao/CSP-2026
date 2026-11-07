#include<bits/stdc++.h>
using namespace std;
struct b{
	int a;
	char c;
};
b xx[200001];
long long s[200001];
char ss[200001];
int ssss[1000];
void pd(long long l,long long r,long long n)
{
	int ans;
	while(1)
	{
		ans=abs(l-r);
		//cout<<l<<" "<<r<<" "<<ans<<endl;
		if(ans==r)
		{
			s[n]=ans;
			//cout<<"asasas";
			return ;
		}
		l=r;
		r=ans;
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>xx[i].a>>xx[i].c;
		s[i]=xx[i].a;
		if(i>=2)
		pd(s[i-1],s[i],i);
	}
	int ans=s[n];
	//cout<<ans<<endl;
	int xxx=1;
	for(int i=1;i<=n;i++)
	{
		xx[i].a=xx[i].a/ans;
		for(int j=1;j<=xx[i].a;j++)
		{
			ss[xxx+j-1]=xx[i].c;
			//cout<<ss[xxx+j-1]<<" "<<xxx+j-1<<endl;
		}
		//cout<<xxx<<endl;
		xxx=xxx+xx[i].a;
		//cout<<xxx<<endl;
	}
	xxx--;
	/*for(int i=1;i<=xxx;i++)
	cout<<ss[i];
	cout<<endl;*/
	int sss=0;
	for(int i=1;i<=xxx;i++)
	{
		if(ss[i]!=ss[xxx-i+1])
		{
			ss[xxx-i+1]=ss[i];
			sss++;
		}
	}
	bool f=false;
	if(ans>=1000000000)
	{
		ans/=1000;
		f=true;
	}
	cout<<sss*ans;
	if(f)
	cout<<"000"<<endl;
	else
	cout<<endl;
	return 0;
}