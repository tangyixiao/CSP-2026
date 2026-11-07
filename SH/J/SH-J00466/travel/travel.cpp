#include <bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2,s1,s2;
	char t1,t2;
	cin >> c1 >> s1 >> t1 >> c2 >> s2 >> t2;
//	 两张车票对应的座位是否在同一节车厢；
	if(c1 == c2){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
//	两张车票对应的座位是否在同一节车厢的同一排；
	if(s1==s2){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
//	 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
	if((t1 >= 'D' && t2 >= 'D') || (t1 < 'D' && t2 < 'D')){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
//	 两张车票对应的座位是否相邻
	if((t1 >= 'D' && t2 >= 'D')||(t1 =='B' || t2 =='B')){
		cout << 1;
	}else{
		cout << "0";
		return 0;
	}
}
