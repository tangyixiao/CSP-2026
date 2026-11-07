#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r",stdin);
	freopen("travel.out", "w", stdout);
	string c1,c2,s1,s2;
	int x;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		x = 1000;
		
		if(s1 == s2){
			x = x + 100;
			cout << x;
		}
		else{
			cout << x;
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}
