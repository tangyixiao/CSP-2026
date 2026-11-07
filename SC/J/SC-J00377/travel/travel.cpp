#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c2,s2;
	cin>>c>>s>>c2>>s2;
	if(c[0]==c2[0]&&c[1]==c2[1])
	{
		cout<<1;
		if(s[0]==s2[0]&&s[1]==s2[1])
		{
			cout<<1;
			if((s[2]<'D'&&s2[2]<'D')||(s[2]>'C'&&s2[2]>'C'))
			{
				cout<<1;
				if(s[2]==s2[2]-1||s[2]==s2[2]+1)
				{
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
		cout<<"000";
	    }
	}
	else{
		cout<<"0000";
	}
	return 0;
}