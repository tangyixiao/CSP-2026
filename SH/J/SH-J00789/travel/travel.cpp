#include<bits/stdc++.h> 
using namespace std;
string c1,s2,c3,s4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s2>>c3>>s4;
	if(c1==c3)
	{
		cout<<"1";
		string n=s2,m=s4;
		n.pop_back();
		m.pop_back();
		if(n==m)
		{
			cout<<"1";
			if((s2[s2.size()-1]-'A'>=3&&s4[s4.size()-1]-'A'<=2)||(s2[s2.size()-1]-'A'<=2&&s4[s4.size()-1]-'A'>=3))
				cout<<"00";
			else
			{
				cout<<"1";
				if(abs(s2[s2.size()-1]-s4[s4.size()-1])==1)
					cout<<"1";
				else
					cout<<"0";
			}
		}
		else
			cout<<"000";
	}
	else
		cout<<"0000";
	
}
