#include <bits/stdc++.h>
using namespace std;

int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1=(c1==c2),a2=(s1[0]+s1[1]==s2[0]+s2[1]);
	if(!a1)
	{
		cout << "0000";
	}
	else
	{
		cout << "1";
		if(!a2)cout << "000";
		else
		{
			cout <<"1";
			if((s1[2]<='C'&&s2[2]>'C')||(s1[2]>'C'&&s2[2]<='C'))
			{
				cout<<"00";
			}
			else
			{
				cout << "1"<<(int)(s1[2]+1==(int)s2[2])||((int)s1[2]==s2[2]+1);
			}
		}
	}
	return 0;
}

