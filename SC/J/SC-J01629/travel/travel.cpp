#include <bits/stdc++.h>
using namespace std;
string c1,s1;
string c2,s2;
int r1,ri,rj;
int x1,xi,xj;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	//车厢
	r1=(c1[0]-'0')*10+(c1[1]-'0');
	x1=(c2[0]-'0')*10+(c2[1]-'0');
	
	//数字排
	ri=(s1[0]-'0')*10+(s1[1]-'0');
	xi=(s2[0]-'0')*10+(s2[1]-'0');
	
	//字母->数字列
	rj=(s1[2]-'A');
	xj=(s2[2]-'A');
	
	
	if(r1==x1)//同车厢
	{
		cout<<1;
		if(ri==xi)//同列
		{
			cout<<1;
			if(!((rj==3 && xj==2) || (rj==2 && xj==3)))//过道一侧
			{
				cout<<1;
				if(abs(rj-xj)==1)cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	cout<<"\n";
	return 0;
}