#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string ri,rs,xi,xs;
	cin >> ri >> rs >> xi >> xs;
	if(ri != xi){
		cout << "0000";
		return 0;
	}
	cout << 1;
	if(rs[0] != xs[0] || rs[1] != xs[1]){
		cout << "000";
		return 0;
	}
	cout << 1;
	if(rs[2] >= 'D' && rs[2] <= 'F' && xs[2] >= 'A' && xs[2] <= 'C' || xs[2] >= 'D' && xs[2] <= 'F' && rs[2] >= 'A' && rs[2] <= 'C'){
		cout << "00";
		return 0;
	}
	cout << 1;
	if(rs[2] == 'A' && xs[2] == 'B' || rs[2] == 'B' && xs[2] == 'A' || rs[2] == 'B' && xs[2] == 'C' ||rs[2] == 'C' && xs[2] == 'B' || rs[2] == 'D' && xs[2] == 'F' || rs[2] == 'F' && xs[2] == 'D'){
		cout << 1;
		return 0;
	}
	cout << 0;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
