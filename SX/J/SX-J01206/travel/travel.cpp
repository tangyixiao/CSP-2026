#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,c;
	cin>>s>>c;
	for(int i = 0;i<=s.size();i++)
	{
		cin>>c[i];
		cin>>s[i];
		if(c[1]!=c[2]||s[1]!=s[2]&&c[1]==c[2]&&s[1]!=s[2])
		{
			cout<<1111<<endl;
			return 0;
		}
		if(c[1]!=c[2]&&c[1]||c[2]==01||16)
		{
			cout<<0000<<endl;
			return 0;
		}

	}

	return 0;
}