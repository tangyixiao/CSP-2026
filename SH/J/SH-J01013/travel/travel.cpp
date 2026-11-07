#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	int c1,c2;
	string s1,s2;
	bool a1=false,a2=false,a3=false,a4=false;
	cin>>c1>>s1>>c2>>s2;
	int ss1=(s1[0]-'0')*10+s1[1]-'0';
	int ss2=(s2[0]-'0')*10+s2[1]-'0';
	int sss1=s1[2]-'A'+1,sss2=s2[2]-'A'+1;
	if(c1==c2)a1=true;
	if(a1&&(ss1==ss2))a2=true;
	if(a2&&((5-sss1>=2&&5-sss2>=2)||(5-sss1<2&&5-sss2<2)))a3=true;
	if(a3)
	{
		if(5-sss1<2&&5-sss2<2)a4=true;
		else if((5-sss1>=2&&5-sss2>=2)&&(sss1-sss2==-1||sss1-sss2==1))a4=true;
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}
