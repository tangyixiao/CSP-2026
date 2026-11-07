#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	string c1, s1, c2, s2;
 	cin >> c1 >> s1 >> c2 >> s2;
 	int a, b, c, d;
 	bool flag = 0;
 	if(c1 == c2)
 	{
 		a = 1;
 	}
 	else
 	{
 		a = 0;
 		flag = 1;
	 }
 	if(((s1[0] == s2[0]) && (s1[1] == s2[1])) && !flag)
 	{
 		b = 1;
 	}
 	else
 	{
 		b = 0;
 		flag = 1;
	 }
	 if((((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F'))) && !flag)
	 {
	 	c = 1;
	 }
	 else
	 {
	 	c = 0;
 		flag = 1;
	 }
	 if(((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C')) || (s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) && !flag)
	 {
	 	d = 1;
	 }
	 else
	 {
	 	d = 0;
	 }
	 cout << a << b << c << d;
	 fclose(stdin);
	 fclose(stdout);
	 return 0;
 }
