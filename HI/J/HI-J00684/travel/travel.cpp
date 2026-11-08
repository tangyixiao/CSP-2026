#include <bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	bool x = true,p=false,c=false;
	
	if(c1 == c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	
	string p1,p2;
	p1 = s1.substr(0,2);
	p2 = s2.substr(0,2);
	
	int pp1=stoi(p1),pp2=stoi(p2);
	
	//cout<<'\n'<<pp1<<" "<<pp2<<'\n';
	
	if(pp1 == pp2){
		cout<<"1";
		p = true;
	}
	else
	{
		cout<<"0"; 
	}
	
	if(p)
	{
		if((s1[2] >= 'A'&&s1[2] <= 'C'&&s2[2] <= 'C'&&s2[2]>='A')
		 || (s1[2] >= 'D' && s1[2]<='F'&&s1[2] >= 'D' && s1[2]<='F'))
		 {
		 	cout<<"1";
		 	c = true;
		 }
		 else
		 {
		 	cout<<"0";
		 }
	}
	else
	{
		cout<<"0";
	}
	
	//cout<<'\n'<<pp1<<'\n'<<pp2<<'\n';
	
	if(p&&c&&  (abs(s1[2] - s2[2]) == 1 || (s1[2]=='D'&&s2[2]=='F') ))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
		
	return 0;
}
