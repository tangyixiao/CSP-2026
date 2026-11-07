#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;//a判断同一节车厢，b判断同一排，c判断同一侧，d判断相邻 
bool tongce(char x,char y){
	if(x < y) swap(x,y);
	if(x >= 'D' && y < 'D') return false;
	return true;
}
bool nearer(char x,char y){
	if(x < y) swap(x,y);
	if(x == 'C' && y == 'A') return false;
	return true;
}
int main(){
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0] != c2[0] || c1[1] != c2[1]){
		cout << "0000";
		return 0;
	}
	cout << 1;
	if(s1[0] != s2[0] || s1[1] != s2[1]){
		cout << "000";
		return 0;
	}
	cout << 1;
	if(!tongce(s1[2],s2[2])){
		cout << "00";
		return 0;
	}
	cout << 1;
	if(!nearer(s1[2],s2[2])){
		cout << "0";
		return 0;
	}
	cout << 1;
	return 0;
} 