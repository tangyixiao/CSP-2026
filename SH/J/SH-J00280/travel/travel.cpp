#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char c1[2], s1[3], c2[2], s2[3];
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0]!=c2[0]||c1[1]!=c2[1]) 
	{
		cout << "0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]) 
	{
		cout << "1000";
		return 0;
	}
	if(s1[2]=='D') s1[2]++;
	if(s2[2]=='D') s2[2]++;
	int t1=(('A'<=s1[2]&&s1[2]<='C')?0:1), t2=(('A'<=s2[2]&&s2[2]<='C')?0:1);
//	cout << s1[2] << " " <<s2[2] << " " << t1 << t2 << "\n";
	if(t1!=t2)
	{
		cout << "1100";
		return 0;
	}
	if(s1[2]-s2[2]!=1&&s2[2]-s1[2]!=1)
	{
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
} 
