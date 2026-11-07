#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
string s3,s4;
string s5[5]={"A","B","C","D","F"},s6[5]={"A","B","C","D","F"};

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s3>>c2>>s4;
	if(c1==c2)
	{
		cout<<"1";
	}
	cout<<"0";
	if(s3==s4)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	for(int i=1;i<=5;i++)
	{
		if((s5[i]=="A" && s6[i]=="B") || (s5[i]=="B" && s6[i]=="C") || (s5[i]=="C" && s6[i]=="A") || (s5[i]=="D" && s6[i]=="F") || (s5[i]=="F" && s6[i]=="D"))
	    {
	    	cout<<"1";
		
		}
		cout<<"0";
    }   
return 0;
}
