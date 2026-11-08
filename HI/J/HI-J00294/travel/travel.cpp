#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int ch1,ch2,s1,s2;
char l1,l2;
int ans1,ans2,ans3,ans4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	ch1=(c1[0]-'0')*10+(c1[1]-'0');
	ch2=(c3[0]-'0')*10+(c3[1]-'0');
	s1=(c2[0]-'0')*10+(c2[1]-'0');
	s2=(c4[0]-'0')*10+(c4[1]-'0');
	l1=c2[2],l2=c4[2];
	if(ch1==ch2) ans1=1;
	if(s1==s2&&ch1==ch2) ans2=1;
	if(((l1>'C'&&l2>'C')||(l1<='C'&&l2<='C'))&&ans2==1) ans3=1;
	if(ans3==1&&abs(l1-l2)==1) ans4=1;
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
 } 
