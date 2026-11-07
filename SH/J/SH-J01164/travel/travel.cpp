#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool a=(s1[2]>='A' && s1[2]<='C'), b=(s2[2]>='A' && s2[2]<='C');
	cout << (c1==c2) << (c1==c2 && s1[0]==s2[0] && s1[1]==s2[1]);
	cout << (c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] && a==b) << (s1[0]==s2[0] && s1[1]==s2[1] && a==b && abs(s1[2]-s2[2])==1);
	return 0;
 }//kskbl 
 
