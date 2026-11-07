#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
string c1, s1, c2, s2;
int main() {
	freopen("travel5.in", "r", stdin);
	freopen("travel5.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2; 
	int r1 ,r2, r3, x1, x2, x3;//1车厢编号，2排数，3座位 
	if(c1[0] == '0'){
		r1 = (int)c1[1]-48;
	}
	else
	{
		r1 = ((int)c1[0]-48)*10+(int)c1[1]-48;
	}
	if(c2[0] == '0'){
		x1 = (int)c2[1]-48;
	}
	else
	{
		x1 = ((int)c2[0]-48)*10+(int)c2[1]-48;
	}
	if(s1[0] == '0'){
		r2 = (int)s1[1]-48;
	}
	else
	{
		r2 = ((int)s1[0]-48)*10+(int)s1[1]-48;
	}
	if(s2[0] == '0'){
		x2 = (int)s2[1]-48;
	}
	else
	{
		x2 = ((int)s2[0]-48)*10+(int)s2[1]-48;
	}
	r3 = (int)s1[2]-64;
	x3 = (int)s2[2]-64;
	//cout << r3 << " " << x3;
	if(r1 == x1)
	{
		if(r2 == x2)
		{
			if((r3 <= 3 && x3 <= 3) || ((4<=r3&& r3 <= 5) && (4<=x3 && x3 <=5)))
			{
				if(abs(r3 - x3) == 1)
				{
					cout <<"1111"; 
				}
				else
				{
					cout << "1110";
				}
			}
			else
			{
				cout << "1100";
			}
		}
		else{
			cout << "1000";
		}
	}
	else{
		cout <<"0000";
	}
	return 0;
}
