#include<bits/stdc++.h>
using namespace std;
string s1="",s2="",s3="",s4="";
char a,b,c,d,e,f;
int main()
{
   	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)
	{
		cout<<'1'; 
		a=s2[0];
		b=s2[1];
		e=s2[2];
		c=s4[0];
		d=s4[1];
		f=s4[2];
		if(a==c&&b==d)
		{
			cout<<'1';
			
			if(('A'<=e&&e<='C'&&'A'<=f&&f<='C')||('D'<=e&&e<='E'&&'D'<=f&&f<='E'))
			{
				cout<<'1';
				int k=abs(int(e-f));
				if(k==1&&((e!='C'&&f!='D')||(e!='C'&&f!='D')))
				{
					cout<<'1';
			        return 0; 		
				}
				else cout<<'0';
			}
			else cout<<"00";
		 } 
		 else cout<<"000";
	}
	else 
	{
		cout<<"0000";
	}
	return 0;
}
