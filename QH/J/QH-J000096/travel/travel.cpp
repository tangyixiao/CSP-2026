#include <bits/stdc++.h>
#include <string>
#include <cstdio>
using namespace std; 
int main()
{
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,a = " ";
	cin >> c1 >> s2 >> c2 >> s2;
	if(s1 == s2 && c1 ==c2) a+="0000";
	if(c1 == c2) a+="1";
	else a+="0";
	if(s1[0] == s2[0] && s1[1] == s2[1]) a+="1";
	else a+="0";
	//if(s1[2] == "A" / "B" / "C" && s2[2] == "A" / "B" /"C") a+="1";
	//else if(s1[2] == "D" / "F" && s2[2] == "D" / "F") a+="1";
	//else a+="0";
	if(s1[2]+1 == s2[2] / s2[2]+1 == s1[2]) a+="1";
	else a+="0";
	cout << a;
	return 0;
}
