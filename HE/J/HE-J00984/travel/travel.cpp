#include <bits/stdc++.h>
using namespace std;

string R_train, X_train, R_seat, X_seat;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> R_train >> R_seat >> X_train >> X_seat;
	
	string R_p = R_seat.substr(0, 2);
	string X_p = X_seat.substr(0, 2);
	string R_a = R_seat.substr(2);
	string X_a = X_seat.substr(2);
	bool tongce = false, tongche = false, tongpai = false, y = false;
	
	if (R_train == X_train)
	{
		cout << 1;
		tongche = true;
	}
	else
	{
		cout << 0;
	}
	if ((R_seat[0] == X_seat[0] && R_seat[1] == X_seat[1]) && tongche)
	{
		cout << 1;
		tongpai = true;
	}
	else
	{
		cout << 0;
	}
	if (((R_a == "A" || R_a == "B" || R_a == "C") && (X_a == "A" || X_a == "B" || X_a == "C") || ((R_a == "E" || R_a == "F") && (X_a == "E" || X_a == "F"))) && tongpai)
	{
		cout << 1;
		tongce = true;
	}
	else
	{
		cout << 0;
	}
	if (((R_a == "A" && X_a == "B") || (R_a == "B" && X_a == "A") || (R_a == "C" && X_a == "B") || (R_a == "B" && X_a == "C") || (R_a == "E" && X_a == "F") || (R_a == "F" && X_a == "E")) && tongce)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
