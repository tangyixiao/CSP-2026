#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string nx,mx;
	cin >> n >> nx >> m >> mx;
	if(n != m){
		cout << "0000";
		return 0;
	}
	else {
		cout << 1;
	}
	if (nx[0] == mx[0] && nx[1] == mx[1]){
		cout << 1;
	}
	else {
		cout << "000";
		return 0;
	}
	
	
	if(nx[2] == 'F' && mx[2] == 'D' || nx[2] == 'D' && mx[2] == 'F'){
		cout << "11";
	}
	else if(nx[2] == 'A' && mx[2] == 'B' || nx[2] == 'B' && mx[2] == 'A'){
		cout << "11";
	}
	else if(nx[2] == 'C' && mx[2] == 'B' || nx[2] == 'B' && mx[2] == 'C'){
		cout << "11";
	}
	else if (nx[2] == 'C' && mx[2] == 'A' || nx[2] == 'A' && mx[2] == 'C'){
		cout << "10";
	}
	else {
		cout << "00";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
