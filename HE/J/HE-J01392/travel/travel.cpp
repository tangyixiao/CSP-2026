#include<bits/stdc++.h>
using namespace std;
string ai,ao,bi,bo;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>ai>>ao>>bi>>bo;
	if(ai==bi)
	{
		cout<<1;
		if(ao[0]==bo[0]&&ao[1]==bo[1])
		{
			cout<<1;
			if((ao[2]<='C'&&bo[2]<='C')||(ao[2]>='D'&&bo[2]>='D'))
			{
				cout<<1;
				if(abs(ao[2]-'A'-(bo[2]-'A'))==1)
				{
					cout<<1;
				 } 
				 else
				 {
				 	cout<<"0";
				 }
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
