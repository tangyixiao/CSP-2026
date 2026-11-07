#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	
	cin>>c1>>s1>>c2>>s2;
	
	bool a1=(c1==c2),a2=(a1&&s1.substr(1)==s2.substr(1)),a3,a4;
	if(a2&&s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A')
	{
		a3=true;
	}
	else if(a2&&s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D')
	{
		a3=true;
	}
	else{a3=false;}
	
	if(a3&&abs(s1[2]-s2[2])<=1&&s1[2]<='C'&&s2[2]<='C'){a4=true;}
	else if(a3&&s1[2]=='D'&&s2[2]=='F'){a4=true;}
	else if(a3&&s1[2]=='F'&&s2[2]=='D'){a4=true;}
	else{a4=false;}
	
	cout<<a1<<a2<<a3<<a4;
	
	return 0;
 } 
