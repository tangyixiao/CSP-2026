#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>s2>>s3;
	if(s==s2)
	{
		if((s1[0]==s3[0])&&(s1[1]==s3[1]))
		{
			if((s1[2]<='C')^(s3[2]<='C')) cout<<"1100";
			else{
				if((s1[2]=='A'&&s3[2]=='B')||(s1[2]=='B'&&s3[2]=='C')||(s1[2]=='D'&&s3[2]=='E')||(s3[2]=='A'&&s1[2]=='B')||(s3[2]=='B'&&s1[2]=='C')||(s3[2]=='D'&&s1[2]=='E')) cout<<"1111";
				else cout<<"1110";
			}
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}