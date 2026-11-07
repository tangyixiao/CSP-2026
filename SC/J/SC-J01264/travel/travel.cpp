#include<bits/stdc++.h> 
using namespace std;
string c1 , s1 , c2 , s2;
int main ()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2)  cout << '1';
	else 
	{
		cout << "0000";
		return 0;
	} 
	
	if(s1[0] == s2[0] && s1[1] == s2[1])  cout << '1';
	else
	{
		cout << "000";
		return 0;
	}
	
	char a = s1[2] , b = s2[2];
	if(a > b)  swap(a , b);
	if(a == 'A' && b == 'B')  cout << "11";
	else if(a == 'A' && b == 'C')  cout << "10";
	else if(a == 'A' && b == 'D')  cout << "00";
	else if(a == 'A' && b == 'E')  cout << "00";
	else if(a == 'B' && b == 'C')  cout << "11";
	else if(a == 'B' && b == 'D')  cout << "00";
	else if(a == 'B' && b == 'E')  cout << "00";
	else if(a == 'C' && b == 'D')  cout << "00";
	else if(a == 'C' && b == 'E')  cout << "00";
	else if(a == 'D' && b == 'E')  cout << "11"; 
}