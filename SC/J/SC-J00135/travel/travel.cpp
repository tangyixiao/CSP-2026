#include<bits/stdc++.h>
using namespace std;
char h,s1_2,s2_2;
long long c1,s1_1,c2,s2_1,l1,l2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	h=getchar();
	while(h<'0' or h>'9')
		h=getchar();
	while(h>='0' and h<='9')
	{
		c1=c1*10+(h-'0');
		h=getchar();
	}
	while(h<'0' or h>'9')
		h=getchar();
	while(h>='0' and h<='9')
	{
		s1_1=s1_1*10+(h-'0');
		h=getchar();
	}
	while(h<'A' or h>'Z')
		h=getchar();
	s1_2=h;
	h=getchar();
	while(h<'0' or h>'9')
		h=getchar();
	while(h>='0' and h<='9')
	{
		c2=c2*10+(h-'0');
		h=getchar();
	}
	while(h<'0' or h>'9')
		h=getchar();
	while(h>='0' and h<='9')
	{
		s2_1=s2_1*10+(h-'0');
		h=getchar();
	}
	while(h<'A' or h>'Z')
		h=getchar();
	s2_2=h;
	if(c1==c2) cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s1_1==s2_1) cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if((s1_2<='C' and s2_2<='C') or (s1_2>'C' and s2_2>'C')) cout<<"1";
	else
	{
		cout<<"00";
		return 0;
	}
	if(s1_2+1==s2_2 or s2_2+1==s1_2) cout<<"1";
	else cout<<"0";
	return 0;
}