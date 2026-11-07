#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int xiang1=0,xiang2=0;
	int pai1=0,pai2=0;
	for(int i=0;i<c1.size();i++)
	{
		if(c1[0]-'0'==0)
		{
			xiang1=c1[1]-'0';
		}
		else
		{
			xiang1=(c1[0]-'0')*10+c1[1]-'0';
		}
	 } 
	
	for(int i=0;i<c2.size();i++)
	{
		if(c2[0]-'0'==0)
		{
			xiang2=c2[1]-'0';
		}
		else
		{
			xiang2=((c2[0]-'0')*10+c2[1]-'0');
		}
	 } 
	 
	 if(xiang1==xiang2)
	 {
		cout<<"1";
	 }
	 else
	 {
	 	cout<<"0";
	 }
	 
	 for(int i=0;i<s1.size();i++)
	{
		if(s1[0]-'0'==0)
		{
			pai1=s1[1]-'0';
		}
		else
		{
			pai1=(s1[0]-'0')*10+s1[1]-'0';
		}
	 } 
	 
	 for(int i=0;i<s2.size();i++)
	{
		if(s2[0]-'0'==0)
		{
			pai2=s2[1]-'0';
		}
		else
		{
			pai2=(s2[0]-'0')*10+s2[1]-'0';
		}
	 } 
	 
	
	if((xiang1==xiang2)&&(pai1==pai2))
	 {
	 	cout<<"1";
	 }
	 else
	 {
	 	cout<<"0";
	 }
	
	 
	 
	 if(((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))&&(xiang1==xiang2)&&(pai1==pai2))
	 {
	 	cout<<"1";
	 }
	 else
	 {
	 	cout<<"0";
	 }
	 
	 if((abs(s1[2]-s2[2])==1)&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))&&(xiang1==xiang2)&&(pai1==pai2))
	 {
	 	cout<<"1";
	 }
	 else
	 {
	 	cout<<"0";
	 }
	
	return 0;
}