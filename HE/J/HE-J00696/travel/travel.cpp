//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
int a,b;
string s,t;
int main()
{
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>a>>s>>b>>t;
	if(a==b)
	{
		if(s[0]==t[0]&&s[1]==t[1])
		{
			if(!((s[2]<='C')^(t[2]<='C')))
			{
				if(s[2]==t[2]-1||s[2]==t[2]+1||s[2]=='D'||t[2]=='D')cout<<1111;
				else cout<<1110;
			}
			else cout<<1100;
		}
		else cout<<1000;
	}
	else cout<<"0000";
	return 0;
}//8:47:48 AC
