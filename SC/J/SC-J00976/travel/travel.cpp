#include<bits/stdc++.h>
#define N 202000
#define M 2020
#define ll long long
using namespace std;
string a1, a2, b1, b2;
ll c[M][2];
bool flag = 1;
int main(){
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	int a3 = a1[0] - '0';
	int a4 = a1[1] - '0';
	c[1][0] = a4 + (a3 * 10);
	int b3 = b1[0] - '0';
	int b4 = b1[1] - '0';
	c[1][1] = b4 + (b3 * 10);
	if ( c[1][1] == c[1][0] ){
		cout << 1;
	}else{
		flag = 0;
		cout << 0;
	}
	
	int a5 = a2[0] - '0';
	int a6 = a2[1] - '0';
	c[2][0] = a6 + (a5 * 10);
	int b5 = b2[0] - '0';
	int b6 = b2[1] - '0';
	c[2][1] = b6 + (b5 * 10);
	if ( c[2][1] == c[2][0] && flag == 1 ){
		cout << 1;
	}else{
		flag = 0;
		cout << 0;
	}
	
	int a7 = a2[2] - 'A';
	int b7 = b2[2] - 'A';
	if ( ((a7 <= 2 && b7 <= 2) || (a7 > 2 && b7 > 2)) && flag == 1 ){
		cout << 1;
	}else{
		flag = 0;
		cout << 0;
	}
	if ( (a7 - 1 == b7 || b7 - 1 == a7) && flag == 1 ){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}