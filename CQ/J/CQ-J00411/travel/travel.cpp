#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2; cin >>c1>>s1>>c2>>s2;
	string x=""+s1[0]+s1[1],xx=""+s2[0]+s2[1];
	if (c1==c2) cout <<1;
	else cout <<0;
	if (c1==c2 && x==xx) cout <<1;
	else cout <<0;
	if (c1==c2 && x==xx && ((s1[2]<='C' && s2[2]<='C') || (s1[2]>'C' && s2[2]>'C'))) cout <<1;
	else cout <<0;
//	cout <<abs(s1[2]-s2[2])<<'\n';
	if (c1==c2 && x==xx && ((s1[2]<='C' && s2[2]<='C') || (s1[2]>'C' && s2[2]>'C')) && abs(s1[2]-s2[2])==1) cout <<1;
	else cout <<0;
	return 0;
 }

