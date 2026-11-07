#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool f1=(c1==c2);
	bool f2=f1&&(s1[0]==s2[0])&&(s1[1]==s2[1]);
	bool f3=f2&&((s1[2]<='C'&&s2[2]<='C')||('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F'));
	bool f4=f3&&(abs(int(s1[2])-int(s2[2]))==1);
	cout<<f1<<f2<<f3<<f4;
	return 0;
}