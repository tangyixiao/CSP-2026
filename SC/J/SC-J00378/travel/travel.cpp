#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string c1,s1,c2,s2;
	 cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}
	else
	cout<<"0";
	if(s1=="01A"&&s2=="01B")
	{
		cout<<"11"; 
	}
	if(s1=="01A"&&s2=="01C")
	{
		cout<<"0"; 
	}
	if(s1=="01A"&&s2=="01D")
	{
		cout<<"0"; 
	}
	if(s1=="01A"&&s2=="01F")
	{
		cout<<"0"; 
	}
	
	if(s2=="01A"&&s1=="01B")
	{
		cout<<"11"; 
	}
	if(s2=="01A"&&s1=="01C")
	{
		cout<<"0"; 
	}
	if(s2=="01A"&&s1=="01D")
	{
		cout<<"0"; 
	}
	if(s2=="01A"&&s1=="01F")
	{
		cout<<"0"; 
	}
	
	
	if(s2=="01B"&&s1=="01A")
	{
		cout<<"11"; 
	}
	if(s2=="01B"&&s1=="01C")
	{
		cout<<"11"; 
	}
	if(s2=="01B"&&s1=="01D")
	{
		cout<<"0"; 
	}
	if(s2=="01B"&&s1=="01F")
	{
		cout<<"0"; 
	}
	
	if(s1=="01B"&&s2=="01A")
	{
		cout<<"11"; 
	}
	if(s1=="01B"&&s2=="01C")
	{
		cout<<"11"; 
	}
	if(s1=="01B"&&s2=="01D")
	{
		cout<<"0"; 
	}
	if(s1=="01B"&&s2=="01F")
	{
		cout<<"0"; 
	}
	return 0;
}