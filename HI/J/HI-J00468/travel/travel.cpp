#include<bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	int x0=1,x1=1,x2=1,x3=1;
	bool f=true;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)  a[0]=1;
	else x0=0;
	for(int i=0;i<=1;i++)
	{
		int r=s1[i]-'0';
		int x=s2[i]-'0';
		if(r!=x) 
		{
			f=false;
			break;
		}
	}
	if(f==true&&x0==1) a[1]=1;
	else x1=0;
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'&&x1==1) a[2]=1;
	else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'&&x1==1) a[2]=1;
	else x2=0;
	if(s1[2]-s2[2]==1||s2[2]-s1[2]==1&&x2==1) a[3]=1;
	else x3=0;
	for(int i=0;i<=3;i++) cout<<a[i];
	return 0;
}
