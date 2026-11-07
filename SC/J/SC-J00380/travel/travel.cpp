#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>s2>>s3;
	if(s==s2)
	{
		cout<<1;
		if(s1[0]==s3[0]&&s1[1]==s3[1])
		{
			cout<<1;
			if((s1[2]=='C'&&s3[2]=='D')||(s1[2]=='C'&&s3[2]=='F')||(s1[2]=='B'&&s3[2]=='D'))
			{
				cout<<"00";
			}
			else{
				cout<<1;
				if(s3[2]-s1[2]==1||s1[2]-s3[2]==1)
				{
					cout<<1;
				}
				else cout<<0;
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}