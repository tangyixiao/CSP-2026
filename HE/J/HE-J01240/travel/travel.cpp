#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
//
map<char,pair<int,int> > mp;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	mp['A']={1,1};
	mp['B']={1,2};
	mp['C']={1,3};
	mp['D']={2,5};
	mp['F']={2,6};
	if(c1==c2)
	{
		cout<<"1";
		if(s1.substr(0,2)==s2.substr(0,2))
		{
			cout<<"1";
			if(mp[s1[2]].first==mp[s2[2]].first)
			{
				cout<<"1";
				if(abs(mp[s1[2]].second-mp[s2[2]].second)==1)
				{
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
}
