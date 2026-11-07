//图灵保佑我 中华人民共和国河北省沧州市第十七中学 JHC 
#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,t1,t2;
char x,y;
bool ans1=0,ans2=0,ans3=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	t1+=s1[0];
	t1+=s1[1];
	t2+=s2[0];
	t2+=s2[1];
	x=s1[2];
	y=s2[2];
	if(c1==c2)
	{
		cout<<1;
		ans1=1;
	}else{
		cout<<0;
	}
	if(t1==t2&&ans1==1)
	{
		cout<<1;
		ans2=1;
	}else{
		cout<<0;
	}
	if(ans2==1&&((x=='A'||x=='B'||x=='C')&&(y=='A'||y=='B'||y=='C'))||(x=='F'||x=='D')&&(y=='F'||y=='D'))
	{
		cout<<1;
		ans3=1;
	}else{
		cout<<0;
	}
	if(ans1==1&&ans2==1&&(x=='A'&&y=='B'||x=='B'&&y=='A'||x=='C'&&y=='B'||x=='B'&&y=='C'||x=='F'&&y=='D'||x=='D'&&y=='F'))
	{
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
