#include<bits/stdc++.h>
using namespace std;
const int N=5;
char c1[N],s1[N],c2[N],s2[N];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++) cin>>c1[i];
	for(int i=1;i<=3;i++) cin>>s1[i];
	for(int i=1;i<=2;i++) cin>>c2[i];
	for(int i=1;i<=3;i++) cin>>s2[i];
	if(c1[1]==c2[1]&&c1[2]==c2[2]) cout<<1;
	else
	{
		cout<<"0000"<<endl;
		return 0;
	}
	if(c1[1]==c2[1]&&c1[2]==c2[2]&&s1[1]==s2[1]&&s1[2]==s2[2]) cout<<1;
	else
	{
		cout<<"000"<<endl;
		return 0;
	}
	if(c1[1]==c2[1]&&c1[2]==c2[2]&&s1[1]==s2[1]&&s1[2]==s2[2]&&((s1[3]=='A'&&s2[3]=='B')||(s1[3]=='C'&&s2[3]=='B')||(s1[3]=='C'&&s2[3]=='A')||(s1[3]=='B'&&s2[3]=='A')||(s1[3]=='B'&&s2[3]=='C')||(s1[3]=='A'&&s2[3]=='C')||(s1[3]=='D'&&s2[3]=='F')||(s1[3]=='F'&&s2[3]=='D')))cout<<1;
	else
	{
		cout<<"00"<<endl;
	}
	if(c1[1]==c2[1]&&c1[2]==c2[2]&&s1[1]==s2[1]&&s1[2]==s2[2]&&((s1[3]=='A'&&s2[3]=='B')||(s1[3]=='C'&&s2[3]=='B')||(s1[3]=='B'&&s2[3]=='A')||(s1[3]=='B'&&s2[3]=='C')||(s1[3]=='D'&&s2[3]=='F')||(s1[3]=='F'&&s2[3]=='D')))cout<<1;
	else cout<<"0"<<endl;
	return 0;
}
