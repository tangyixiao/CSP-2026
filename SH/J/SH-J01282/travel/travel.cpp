#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
string a1, a2, b1, b2;
bool f1, f2;
bool te(char x, char y){
	if (x == 'A' && y == 'B' || x == 'B' && y == 'C' || x == 'D' && x == 'E'){
		return true;
	}else{
		swap(x,y);
		if (x == 'A' && y == 'B' || x == 'B' && y == 'C' || x == 'D' && x == 'E'){
			return true;
		}
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	if (a2[2] == 'A' || a2[2] == 'B' || a2[2] == 'C'){
		f1 = 0;
	}else{
		f1 = 1;
	}
	if (b2[2] == 'A' || b2[2] == 'B' || b2[2] == 'C'){
		f2 = 0;
	}else{
		f2 = 1;
	}
	if (a1 == b1){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a1 == b1 && a2[0] == b2[0] && a2[1] == b2[1]){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a1 == b1 && a2[0] == b2[0] && a2[1] == b2[1] && f1 == f2){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a1 == b1 && a2[0] == b2[0] && a2[1] == b2[1] && f1 == f2 && te(a2[2],b2[2])){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
} 
