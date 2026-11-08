#include<bits/stdc++.h>
using namespace std; 

int main()
{
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	char c1[30],s1[30],c2[30],s2[30];	
	cin>>c1[0]>>c1[1]>>s1[0]>>s1[1]>>s1[2]>>c2[0]>>c2[1]>>s2[0]>>s2[1]>>s2[1];		
	if(c1[0]==c2[0]||c1[1]==c2[1])
		cout<<"1";
	else 
		cout<<"0";
	if(s1[0]==s2[0]||s1[1]==s2[1])
		cout<<"1"; 
	else
		cout<<"0";
	if(s1[2]<d)
		if(s2[2]<d)
			cout<<"1";
		else
			cout<<"0";
	if(s1[2]>=d)
		if(s2[2]>=d)
			cout<<"1";
		else
			cout<<"0";	
		
		
		cout<<"1";
	else
		cout<<"0";
	if(c1[2]-'0'==c2[2]-'0'+1&&c1[2]-'0'==c2[2]-'0'-1)
		cout<<"1";
	else 
		cout<<"0";
	
 return 0;	
 } 
