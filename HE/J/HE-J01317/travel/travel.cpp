#include<bits/stdc++.h>
using namespace std;
//#define AC WA
//Hello World!
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	string p1,p2;
	char abc1,abc2;
	char ans[]="0000";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans[0]='1';
	p1=s1.substr(0,2),p2=s2.substr(0,2);
	abc1=s1[2],abc2=s2[2];
	if((ans[0]-'0')&&p1==p2) ans[1]='1';
	int cnt=0;
	for(char i='A';i<='C';i++)
		if(abc1==i||abc2==i) cnt++;
	if((ans[1]-'0')&&cnt%2==0) ans[2]='1';
	if(abs(abc1-abc2)==1&&(ans[2]-'0')) ans[3]='1';
	cout<<ans;
	return 0;
}
