#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string sn1 , seat1 , sn2 , seat2;
	cin >> sn1 >> seat1 >> sn2 >> seat2;
	int l1 = seat1.size(), l2 = seat2.size();
	
	if(sn1 == sn2) cout << 1;
	else return cout << "0000" , 0;
	
	string r1 , r2;
	char c1 , c2;
	for(int i = 0;i < l1 - 1;i++) r1 += seat1[i];
	for(int i = 0;i < l2 - 1;i++) r2 += seat2[i];
	c1 = seat1[l1 - 1];
	c2 = seat2[l2 - 1];
	//cout << r1 << " " << r2 << " " << c1 << " " << c2 << "\n";
	if(r1 == r2) cout << 1;
	else return cout << "000" , 0;
	
	if(c1 == 'A'){
		if(c2 == 'B') return cout << 11 , 0;
		if(c2 == 'C') return cout << 10 , 0;
		else return cout << "00" , 0;
	}
	if(c1 == 'B'){
		if(c2 == 'A' || c2 == 'C') return cout << 11 , 0;
		else return cout << "00" , 0;
	}
	if(c1 == 'C'){
		if(c2 == 'A') return cout << 10 , 0;
		if(c2 == 'B') return cout << 11 , 0;
		else return cout << "00" , 0;
	}
	if(c1 == 'D'){
		if(c2 == 'F') return cout << 11 , 0;
		else return cout << "00" , 0;
	}
	if(c1 == 'F'){
		if(c2 == 'D') return cout << 11 , 0;
		else return cout << "00" , 0;
	}
	cout << "\n";
}