#include <cstdio>
#include <iostream>
#include <algorithm>

#include <string>
#include <cstring>

using namespace std;

string c1,s1,c2,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2)	cout << 1;
	else	cout << 0;
	
	if(s1.substr(0,2) == s2.substr(0,2))	cout << 1;
	else	cout << 0;
	
	if((s1.at(2) <= 'C' && s2.at(2) <= 'C') || (s1.at(2) > 'C' && s2.at(2) > 'C'))	cout << 1;
	else	cout << 0;	
	
	if(abs(s1.at(2) - s2.at(2)) == 1 && ((s1.at(2) <= 'C' && s2.at(2) <= 'C') || (s1.at(2) > 'C' && s2.at(2) > 'C')))	cout << 1;
	else	cout << 0;	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}