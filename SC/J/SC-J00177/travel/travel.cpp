#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1=0,a2=0,a3=0,a4=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a1=1;
	if(a1==1&&s1[0]==s2[0]&&s1[1]==s2[1]) a2=1;
	if(a1==1&&a2==1)
	{
		int res1=0,res2=0;
		if(s1[2]>='D') res1=1;
		if(s2[2]>='D') res2=1;
		if(res1==res2) a3=1;
	}
	if(a1==1&&a2==1&&a3==1&&abs(s1[2]-s2[2])<=1) a4=1;
	cout<<a1<<a2<<a3<<a4;
	return 0;
}