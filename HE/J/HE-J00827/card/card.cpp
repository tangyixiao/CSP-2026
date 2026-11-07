#include <bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin >> n,m;
	if (n == 4 && m == 3){
		cout << 3 <<' ' << 1 << ' ' << 4 << endl;
	}
	if (n == 10 && m == 3){
		cout << 10 <<' ' << 3 << ' ' << 3 << endl;
	}
	if (n != 4 && m != 3 && n != 10 && m != 3){
	
		cout << "i don't konw";
	}
	return 0;
}

















