#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[10][10];
	char b[10][10];
	cin >> a[1] >> a[2] >> b[1] >> b[2];
	int acar = (a[1][0] - '0') * 10 + (a[1][1] - '0');
	int bcar = (b[1][0] - '0') * 10 + (b[1][1] - '0');
	if(acar != bcar){
		cout << "0000" << '\n';
		return 0;
	}
	int al = (a[2][0] - '0') * 10 + (a[2][1] - '0');
	int bl = (b[2][0] - '0') * 10 + (b[2][1] - '0');
	if(al != bl){
		cout << "1000" << '\n';
		return 0;
	}
	int aseat , bseat;
	if(a[2][2] == 'A'){
		aseat = 1;
	}else if(a[2][2] == 'B'){
		aseat = 2;
	}else if(a[2][2] == 'C'){
		aseat = 3;
	}else if(a[2][2] == 'D'){
		aseat = 4;
	}else if(a[2][2] == 'F'){
		aseat = 5;
	}
	if(b[2][2] == 'A'){
		bseat = 1;
	}else if(b[2][2] == 'B'){
		bseat = 2;
	}else if(b[2][2] == 'C'){
		bseat = 3;
	}else if(b[2][2] == 'D'){
		bseat = 4;
	}else if(b[2][2] == 'F'){
		bseat = 5;
	}
	if(aseat == 5 && bseat == 4){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 4 && bseat == 5){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 1 && bseat == 2){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 2 && bseat == 1){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 2 && bseat == 3){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 3 && bseat == 2){
		cout << "1111" << '\n';
		return 0;
	}
	if(aseat == 1 && bseat == 3){
		cout << "1110" << '\n';
		return 0;
	}
	if(aseat == 3 && bseat == 1){
		cout << "1110" << '\n';
		return 0;
	}
	cout << "1100" << '\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
