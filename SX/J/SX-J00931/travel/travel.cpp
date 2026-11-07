#include<bits/stdc++.h>
using namespace std;
char c1[101],s1[101],c2[101],s2[101],ans[101];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;

	if(c1[0]==c2[0]&&c1[1]==c2[1])
	ans[0]='1';
	else
	ans[0]='0';

	if(c1[0]==c2[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1])
	ans[1]='1';
	else
	ans[1]='0';

	if(c1[0]==c2[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))
		ans[2]='1';
		else
		ans[2]='0';
	}
	else
	ans[2]='0';

	if(c1[0]==c2[0]&&c1[1]==c2[1]&&s1[0]==s2[0]&&s1[1]==s2[1])
	{
		if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C'))
		ans[3]='0';
		else if(abs(s1[2]-s2[2])==1)
		ans[3]='1';
		else if((s1[2]=='F'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='F'))
		ans[3]='1';
		else
		ans[3]='0';
	}
	else
	ans[3]='0';

	for(int i=0;i<4;i++)
	cout<<ans[i];
	return 0;
}