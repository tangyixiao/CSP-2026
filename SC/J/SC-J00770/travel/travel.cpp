#include<bits/stdc++.h>
using ll=long long;
using namespace std;
string s[4];
ll op[200];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	op['A']=1;
	op['B']=1;
	op['C']=1;
	op['D']=2;
	op['E']=2;
	for(int i=0;i<4;i++)cin>>s[i];
	if(s[0]==s[2])
	{
		cout<<"1";
		if(s[1].substr(0,2)==s[3].substr(0,2))
		{
			cout<<"1";
			if(op[s[1][2]]==op[s[3][2]])
			{
				cout<<"1";
				if(s[1][2]>s[3][2])
				{
					swap(s[1][2],s[3][2]);
				}
				if(s[1][2]+1==s[3][2])cout<<"1";
				else cout<<"0";
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