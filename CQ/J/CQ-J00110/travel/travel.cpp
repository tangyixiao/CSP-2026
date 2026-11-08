#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a,b,c,d;
int x,y;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	x = s1[2] - 'A' + 1;
	if(s1[2] == 'F')x--; 
	y = s2[2] - 'A' + 1;
	if(s2[2] == 'F')y--;
	if(c1 == c2)a = 1;
	if(a == 1 && (s1[0] + s1[1]) == (s1[0] +s2[1]))b = 1;
	if(b == 1 && ((x <= 3 && y <= 3) || (x > 3 && y > 3)))c = 1;
	if(c == 1 && abs(x - y) == 1)d = 1;
	cout<<a<<b<<c<<d;
	return 0;
}
