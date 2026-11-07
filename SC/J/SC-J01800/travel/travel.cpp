#include <bits/stdc++.h>
using namespace std;
int car1 , car2 , p1 , p2;
string seat1 , seat2;
int main()
{
	freopen("travel.in" , "r" , stdin);
    freopen("travel.out" , "w" , stdout);
    cin >> car1 >> seat1 >> car2 >> seat2;
	if(car1 != car2){
		cout << "0000";
		return 0;
	}
	cout << 1;
	p1 = (int(seat1[0]) - 48) * 10 + (int(seat1[1]) - 48);
	p2 = (int(seat2[0]) - 48) * 10 + (int(seat2[1]) - 48);
	if(p1 != p2){
		cout << "000";
		return 0;
	}
	cout << 1;
	if(seat1[2] == 'A' || seat1[2] == 'B' || seat1[2] == 'C' && seat2[2] == 'A' || seat2[2] == 'B' || seat2[2] == 'C')
	{
		cout << 1;
		if(seat1[2] == 'B' || seat2[2] == 'B'){
			cout << 1;
		}
		else cout << 0;
	}
	else if(seat1[2] == 'D' && seat2[2] == 'F' || seat2[2] == 'D' && seat1[2] == 'F'){
		cout << 11;
	}
	else cout << "00";
	return 0;
}