#include <bits/stdc++.h>
using namespace std;
int c1,c2;
int s1,s2;
int i;


int main()
{
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin >> c1 >> c2;
	cin >> s1 >> s2;
	if(c1 == c2)
	cout << 1;
	if(c1 != c2)
	cout << 0;
	if(s1 == s2)
	cout << 110;
	if(s1 != s2)
	cout << 010;
	
	return 0;
}
