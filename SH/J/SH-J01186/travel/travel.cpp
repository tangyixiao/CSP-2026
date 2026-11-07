#include<bits/stdc++.h>
using namespace std;
int num1,num2;
string ans1,ans2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>num1>>ans1>>num2>>ans2;
	
	if(num1!=num2)
	{
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(ans1[0]!=ans2[0]||ans1[1]!=ans2[1])
	{
		cout<<"000";
		return 0;
	}
	cout<<"1"; 
	if(ans1[2]<'D'&&ans2[2]>='D')
	{
		cout<<"00";
		return 0;
	}
	if(ans1[2]>='D'&&ans2[2]<'D')
	{
		cout<<"00";
		return 0; 
	}
	cout<<"1";
	if(ans1[2]=='C'&&ans2[2]=='A')
	{
		cout<<"0";
		return 0;
	}
	if(ans1[2]=='A'&&ans2[2]=='C')
	{
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
}
