#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll a,b;
string s1,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out ","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a==b)
	{
		cout<<1;
		string t1,t2;
		t1=s1[0]+s1[1];
		t2=s2[0]+s2[1];
		if(t1==t2)
		{
			cout<<1;
			if((s1[2]<='c' && s2[2]<='C') || ('D'<=s1[2] && 'D'<=s2[2]))
			{
				cout<<1;
				if(abs(s1[2]-s2[2])==1)
				{
					cout<<1;
				}
				else
				{
					cout<<0;
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
