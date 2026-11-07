#include<bits/stdc++.h>
using namespace std;
#define ll long long
//const int N=;
string c1,c2,s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
		cout<<"0000";
	else
	{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<"1";
			string t;
			t+=s1[2];
			t+=s2[2];
			sort(t.begin(),t.end());
			if(t=="AB"||t=="BC"||t=="AC"||t=="DF")//?!AC?!
			{
				cout<<"1";
				if(t=="AB"||t=="BC"||t=="DF")
					cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else 
			cout<<"000";
	}
	return 0;
}
//I don't know SX (has or don't has mi huo xingwei show)
//freeopen(
//freopen(
//freoopen(
//8:18    ¿§·ÈÕæºÃºÈQWQ
//8:32    ÃÜÂëÎ´ÕÒµ½£¿£¡
//8:33    ¿¨ËÀÁË