#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool la;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	la=(c1==c2);cout<<la;
	la&=(s1[0]==s2[0]&&s1[1]==s2[1]);cout<<la;
	la&=((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'));cout<<la;
	la&=(abs(int(s1[2]-s2[2]))==1);cout<<la;
	return 0;
}
