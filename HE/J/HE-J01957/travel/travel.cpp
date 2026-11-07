#include<iostream>
#include<string>
using namespace std;
int c1,c2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	long long ans1,ans2,ans3,ans4;
	ans1=0;
	ans2=0;
	ans3=0;
	ans4=0;
	if(c1==c2)
	{
		ans1=1;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])
	{
		ans2=1;
	}
	int s1_num,s2_num;
	if(s1[2]=='A')
	{
		s1_num=1;
	}
	if(s1[2]=='B')
	{
		s1_num=2;
	}
	if(s1[2]=='C')
	{
		s1_num=3;
	}
	if(s1[2]=='D')
	{
		s1_num=4;
	}
	if(s1[2]=='F')
	{
		s1_num=5;
	}
	if(s2[2]=='A')
	{
		s2_num=1;
	}
	if(s2[2]=='B')
	{
		s2_num=2;
	}
	if(s2[2]=='C')
	{
		s2_num=3;
	}
	if(s2[2]=='D')
	{
		s2_num=4;
	}
	if(s2[2]=='F')
	{
		s2_num=5;
	}
	if((s1[0]==s2[0]&&s1[1]==s2[1])&&((s1_num<=3&&s2_num<=3)||(s1_num>=4||s2_num>=4)))
	{
		ans3=1;
	}
	int num1=s1[0]*10+s1[1];
	int num2=s2[0]*10+s2[1];
	if((s2_num==s1_num+1||s2_num==s1_num-1)&&(num1+1==num2||num1-1==num2))
	{
		ans4=1;
	}
	cout<<ans1<<ans2<<ans3<<ans4<<endl;
	return 0;
}
