#include<bits/stdc++.h>
using namespace std;
string C1,S1,C2,S2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> C1 >> S1 >> C2 >> S2;
	if(C1 != C2) cout << "0000";
	else
	{
		if(S1.substr(0,2) != S2.substr(0,2)) cout << "1000";
		else
		{
			char a = S1[2],b = S2[2];
			if((a <= 'C' && b >= 'D') || (a >= 'D' && b <= 'C')) 
				cout << "1100";
			else
			{
				if(a > b) swap(a,b);
				if(b == a+1 && !(a == 'C' && b == 'D')) cout << "1111";
				else cout << "1110";
			}
		}
	}
	return 0;
}