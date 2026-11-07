#include<bits/stdc++.h>
using namespace std;
int ki=1,nm[30000000],mn[30000000];
int g,h,cc=0;
string a={},b={},c={};
int f(int n,int m)
{
	while(n!=1){
		if(n%2==0)
		{
			a+='0';
		}
		else{
			a+='1';
		}
		n/=2;
}
a+='1';
while(m!=1){
		if(m%2==0)
		{
			b+='0';
		}
		else{
			b+='1';
		}
		m/=2;
}
b+='1';
g=a.size();
h=b.size();
for(int i=0;i<g;i++)
{
		if(a[i]==b[i])
		{
			if(a[i]=='1')
			{
				cc+=ki;
			}
		}
		ki*=2;
}
a={};b={};c={};
return cc;
cc=0;
ki=1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int r,e;
	int u;
	cin>>r>>e;
	for(int i=1;i<=r;i++)
	{
		cin>>nm[i];
	}
	for(int i=1;i<=r-e;i++)
	{
		u=nm[i];
		for(int j=e;j<=i+1;j--)
		{
			u=f(u,nm[i-1]);
		}
		mn[i]=u;
	}
	sort(mn,mn+r+1);
	cout<<mn[r];
}

