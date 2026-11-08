#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,s;
int main()
{
	freopen("r",travel,std.in);
	frepoen("w",travel,std.out);
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1==s1) s+='1';
	else s+='0';
	if (c2[0]+c2[1]==s2[0]+s2[1]) s+='1';
	else s+='0';
	if ((c2[0]+c2[1]==s2[0]+s2[1])&&((c2[2]>='A'&&c2[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(c2[2]>='D'&&c2[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))) s+='1';
	else s+='0';
	if (((c2[0]+c2[1]==s2[0]+s2[1])&&((c2[2]>='A'&&c2[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(c2[2]>='D'&&c2[2]<='F'&&s2[2]>='D'&&s2[2]<='F')))&&abs(int(s2[2]-c2[2]))==1) s+='1';
	else s+='0';
	cout << s;	
	return 0;
}
