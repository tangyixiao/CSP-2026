#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<"1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	string p1=s1.substr(0,2),p2=s2.substr(0,2);
	char w1=s1[2],w2=s2[2];
	if(p1==p2)
	{
		cout<<"1";
		if(('A'<=w1 && w1<='C') && ('A'<=w2 && w2<='C'))
		{
			cout<<"1";
			if(abs(w1-w2)==1)cout<<1;
			else cout<<"0";
		}
		else if((w1=='F' || w1=='D') && (w2=='F' || w2=='D'))
		{
			cout<<"11";
		}
		else
		{
			cout<<"00";
		}
	}
	else cout<<"000";
	return 0;
}