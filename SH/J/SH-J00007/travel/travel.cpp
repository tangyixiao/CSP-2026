#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2);
	cout<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]);
	cout<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(!((s1[2]<'D')^(s2[2]<'D'))));
	cout<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(!((s1[2]<'D')^(s2[2]<'D')))&&(s1[2]&s2[2]!='A'&'C'));
	return 0;
}
