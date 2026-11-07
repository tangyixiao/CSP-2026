#include<bits/stdc++.h>
using namespace std;
string c2,s2;
int c1,s1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
 	cin>>c1>>c2>>s1>>s2;
	//cout<<c1<<' '<<s1<<' '<<c2<<' '<<s2<<endl;
	if(c1==s1)
	{
		cout<<1;
		if(c2[0]+c2[1]==s2[0]+s2[1])
		{
			cout<<1;
			int a=c2[2]-'A'+1;
			int b=s2[2]-'A'+1;
			if(a<=3&&b<=3||a>3&&b>3)
			{
				cout<<1;
				//cout<<"A"<<a<<"B"<<b<<endl;
				if(abs(a-b)==1) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";

	}
	else cout<<"0000";


	return 0;

}