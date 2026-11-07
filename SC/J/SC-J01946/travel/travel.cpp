#include<iostream>
#include<string>
using namespace std;
string s1,s2,t1,t2,ans;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> t1 >> s2 >> t2;
	if(!(s1[0] == s2[0] && s1[1] == s2[1]))
	{
		cout << "0000";
		return 0;
	} 
	else if(!(t1[0] == t2[0] && t1[1] == t2[1]))
	{
		cout << "1000";
		return 0;
	}
	else if(!(t1[2] <= 'C' && t2[2] <= 'C' || t1[2] > 'C' && t2[2] > 'C'))
	{
		cout << "1100";
		return 0;
	}
	else if(!(t1[2] - t2[2] == 1 || t1[2] - t2[2] == -1))
	{
		cout << "1110";
		return 0;
	}
	else
	{
		cout << "1111";
		return 0;
	}
	return 0;
} 