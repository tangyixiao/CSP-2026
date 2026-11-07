#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    freopen("travel.in","r");
    freopen("travel.out","w");
	string a1,b1,a2,b2;
	string m;
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2)
	    m+='1';
	else
	    m+='0';
	if(a1==a2)
	    if(b1[0]==b2[0]&&b1[1]==b2[1])
	        m+='1';
	    else
	        m+='0';
	else
	    m+='0';
	if(a1==a2)
	    if(b1[0]==b2[0]&&b1[1]==b2[1])
	        if(b1[2]>'C'&&b2[2]>'C'||b2[2]<='C'&&b1[2]<='C')
	            m+='1';
	        else
	            m+='0';
	    else
	        m+='0';
	else
	    m+='0';
	if(a1==a2)
	    if(b1[0]==b2[0]&&b1[1]==b2[1])
	        if(b1[2]>'C'&&b2[2]>'C'||b2[2]<='C'&&b1[2]<='C')
	            if(b1[2]-b2[2]==1||b2[2]-b1[2]==1)
	                if(b1[2]=='C'&&b2[2]!='D'||b2[2]=='C'&&b1[2]!='D')
	                    m+='1';
	                else
	                    m+='0';
	            else
	                m+='0';
	        else
	            m+='0';
	    else
	        m+='0';
	else
	    m+='0';
	cout<<m;
	return 0;
}