#include<bits/stdc++.h>//1
using namespace std;
typedef long long ll;

int c1,c2;//车厢号 1到17 不为1或16 
string s1,s2;//座位号 //下标从0开始 
//18行, 5列 (ABCDEF)

int hx,hr;
char lx,lr;

int ans[6];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1;
	cin>>c2>>s2;
	
	hx=(s1[0]-'0')*10+(s1[1]-'0');
	hr=(s2[0]-'0')*10+(s2[1]-'0');
	
	lx=s1[2];
	lr=s2[2];
//	cout<<lx<<" "<<lr<<"\n";//
	
	
	for(int i=1;i<=4;i++)
	{
		if(i==1)
		{
			if(c1==c2)
			{
				ans[1]=1;
			}
			else break;
		}
		if(i==2)
		{
			if(hx==hr)
			{
				ans[2]=1;
			}
			else break;
		}
		if(i==3)
		{
			if((('A'<=lx&&lx<='C')&&('A'<=lr&&lr<='C')) || (('D'<=lx&&lx<='F')&&('D'<=lr&&lr<='F')))
			{
				ans[3]=1;
			}
			else break;
		}
		if(i==4)
		{
			int t=(lx-'0')-(lr-'0');
			if(abs(t)==1)
			{
				ans[4]=1;
			}
		}
	}
	
	for(int i=1;i<=4;i++)
	{
		cout<<ans[i];
	}
	
	
	return 0;
}
/*
02 01A 02 01B
02 01C 02 01A
*/