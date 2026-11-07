#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
string c1,s1,c2,s2;
string rce,xce;
bool same_che,same_pai;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(s1[2] == 'D' || s1[2] == 'F') rce = "right";
	else rce = "left";
	if(s2[2] == 'D' || s2[2] == 'F') xce = "right";
	else xce = "left";
	if(c1 == c2)
	{
		same_che = 1;
		cout << 1;
	}
	else cout << 0;
	if(same_che && s1[0] == s2[0] && s1[1] == s2[1])
	{
		same_pai = 1;
		cout << 1;
	}
	else cout << 0;
	if(same_pai && same_che && rce == xce) cout << 1;
	else cout << 0;
	if(same_che && same_pai && rce == "right" && xce == "right") cout << 1;
	else
	{
		if(abs(s1[2]-s2[2]) == 1 && same_che && same_pai && rce == xce) cout << 1;
		else cout << 0;
	}
	return 0;
 } 
