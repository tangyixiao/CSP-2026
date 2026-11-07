#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) 
	{
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			if(s1[2]+s2[2]=='F'+'D'&&s1[2]+s2[2]=='A'+'B'&&s1[2]+s2[2]=='B'+'C')
			{
				cout<<1111;
			}
			else
			{
				cout<<"1110";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
