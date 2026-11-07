#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	char sx,sy;
	int ss1=0,ss2=0;
	for(int i = 0;i < s1.size();i++)
	{
		if(s1[i]>='A'&&s1[i]<='F')sx = s1[i];
		if(s1[i]>='0'&&s1[i]<='9')
		{
			ss1 = ss1*10+s1[i]-'0';
		}
	}
	for(int i = 0;i < s2.size();i++)
	{
		if(s2[i]>='A'&&s2[i]<='F')sy = s2[i];
		if(s2[i]>='0'&&s2[i]<='9')
		{
			ss2 = ss2*10+s2[i]-'0';
		}
	}
	if(c1==c2)cout <<1;
	else {
		cout <<"0000";
		return 0;
	}	
	if(ss1==ss2)cout <<1;
	else{
		cout <<"000";
		return 0;
	}
	if((sx=='A'||sx=='B'||sx=='C')&&(sy=='A'||sy=='B'||sy=='C'))cout <<1;
	else if(c1==c2&&(sx=='D'||sx=='F')&&(sy=='D'||sy=='F'))cout <<1;
	else
	{
		cout <<"00";
		return 0;
	}
	if(sx>='A'&&sx<='C'&&sy>='A'&&sy<='C'&&abs((sx-'0')-(sy-'0'))==1)cout <<1;
	else if(sx=='D'&&sy=='F'||sx=='F'&&sy=='D')cout <<1;
	else cout <<0;
	return 0;
}
