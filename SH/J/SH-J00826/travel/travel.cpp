#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int at,bt;
	string as,bs;
	cin >> at >> as >> bt >> bs;
	if(at == bt) cout << '1';
	else{
		cout << "0000";
		return 0;
	}
	if(as[0] == bs[0] && as[1] == bs[1]) cout << '1';
	else{
		cout << "000";
		return 0;
	}
	if(as[2] == 'A' || as[2] == 'B' || as[2] == 'C' && bs[2] == 'A' || bs[2] == 'B' || bs[2] == 'C' ) cout << '1';
	else if(as[2] == 'D' || as[2] == 'F' && bs[2] == 'D' || bs[2] == 'F') cout << '1';
	else{
		cout << "00" << ' ';
		return 0;
	}
	if(abs(as[2] - bs[2]) == 1) cout << 1;
	else cout << 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
