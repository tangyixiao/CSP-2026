#include<bits/stdc++.h>
using namespace std;
bool flag[10];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	c1="0"+c1;
	s1="0"+s1;
	c2="0"+c2;
	s2="0"+s2;
	if(c1[1]==c2[1]&&c1[2]==c2[2])flag[1]=1;
	else flag[1]=0;
	if(flag[1]==1&&(s1[1]==s2[1]&&s1[2]==s2[2]))flag[2]=1;
	else flag[2]=0;
	if(flag[2]==1&&((s1[3]=='A'||'B'||'C')&&(s2[3]=='A'||'B'||'C')))flag[3]=1;
	else if(flag[2]==1&&((s1[3]=='D'&&'F')&&(s2[3]=='D'&&'F')))flag[3]=1;
	else flag[3]=0;
	if(flag[3]==1&&(s2[3]=='D'||'F'&&s2[3]=='D'||'F'))flag[4]=1;
	else if(flag[3]==1&&((int)s1[3]-(int)s2[3]==1)||((int)s1[3]-(int)s2[3]==-1))flag[4]=1;
	else flag[4]=0;
	for(int i=1;i<=4;i++)cout<<flag[i];
	return 0;
}
