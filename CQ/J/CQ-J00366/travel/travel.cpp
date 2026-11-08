#include<bits/stdc++.h>
using namespace std;
int a[4] = {0 , 0 , 0 , 0};
int check(string s)
{
	if(s == "AB") return 2;
	if(s == "BC") return 2;
	if(s == "AC") return 1;
	if(s == "DE") return 2;
	return 0;
}
int main()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	string s1 , s2 , s3 , s4;
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1 == s3)
	{
		a[0] = 1;
		if(s2[0] == s4[0] and s2[1] == s4[1])
		{
			a[1] = 1;
			string x = "";
			string y = "";
			x += s2[2];
			x += s4[2];
			y += s4[2];
			y += s2[2];
			int c = max(check(x) , check(y));
			for(int i = 0;i < c;i++) a[i + 2] = 1;
		}
	}
	for(int i = 0;i < 4;i++) cout << a[i];
	return 0;
}

