#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel", "r", stdin);
	freopen("travel", "w", stdout);
	std::ios::sync_with_stdio(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string a1, b1, a2, b2;
	if(c1 == "01" || c2 == "01" || c1 == "16" || c2 == "16") {
		cout << "0000" << '\n';
		return 0;
	}
	if(c1 == c2) cout << '1';
	else cout << 0;
	if(s1.size()-1 == s2.size()-1){
		cout << '1'; return 0;
	} 
	else{
		cout << '0';
		return 0;	
	} 
	
	if(s1.size() == '02A'&&s2.size() == '02B'||s1.size() == '03A'&&s2.size() == '03B'||s1.size() == '04A'&&s2.size() == '04B'||s1.size() == '05A'&&s2.size() == '05B'||s1.size() == '06A'&&s2.size() == '06B'||s1.size() == '07A'&&s2.size() == '07B'||s1.size() == '08A'&&s2.size() == '08B'||s1.size() == '09A'&&s2.size() == '09B'||s1.size() == '10A'&&s2.size() == '10B'||s1.size() == '11A'&&s2.size() == '11B'||s1.size() == '12A'&&s2.size() == '12B'||s1.size() == '13A'&&s2.size() == '13B'||s1.size() == '14A'&&s2.size() == '14B'||s1.size() == '15A'&&s2.size() == '15B'||s1.size() == '17A'&&s2.size() == '17B'){
		cout << '1';
	}
	if(s1.size() == '02A'&&s2.size() == '02C'||s1.size() == '03A'&&s2.size() == '03C'||s1.size() == '04A'&&s2.size() == '04C'||s1.size() == '05A'&&s2.size() == '05C'||s1.size() == '06A'&&s2.size() == '06C'||s1.size() == '07A'&&s2.size() == '07C'||s1.size() == '08A'&&s2.size() == '08C'||s1.size() == '09A'&&s2.size() == '09C'||s1.size() == '10A'&&s2.size() == '10C'||s1.size() == '11A'&&s2.size() == '11C'||s1.size() == '12A'&&s2.size() == '12C'||s1.size() == '13A'&&s2.size() == '13C'||s1.size() == '14A'&&s2.size() == '14C'||s1.size() == '15A'&&s2.size() == '15C'||s1.size() == '17A'&&s2.size() == '17C'){
		cout << '1';
	}
	if(s1.size() == '02A'&&s2.size() == '02D'||s1.size() == '03A'&&s2.size() == '03D'||s1.size() == '04A'&&s2.size() == '04D'||s1.size() == '05A'&&s2.size() == '05D'||s1.size() == '06A'&&s2.size() == '06D'||s1.size() == '07A'&&s2.size() == '07D'||s1.size() == '08A'&&s2.size() == '08D'||s1.size() == '09A'&&s2.size() == '09D'||s1.size() == '10A'&&s2.size() == '10D'||s1.size() == '11A'&&s2.size() == '11D'||s1.size() == '12A'&&s2.size() == '12D'||s1.size() == '13A'&&s2.size() == '13D'||s1.size() == '14A'&&s2.size() == '14D'||s1.size() == '15A'&&s2.size() == '15D'||s1.size() == '17A'&&s2.size() == '17D'){
		cout << '0';return 0;
	}
	if(s1.size() == '02A'&&s2.size() == '02F'||s1.size() == '03A'&&s2.size() == '03F'||s1.size() == '04A'&&s2.size() == '04F'||s1.size() == '05A'&&s2.size() == '05F'||s1.size() == '06A'&&s2.size() == '06F'||s1.size() == '07A'&&s2.size() == '07F'||s1.size() == '08A'&&s2.size() == '08F'||s1.size() == '09A'&&s2.size() == '09F'||s1.size() == '10A'&&s2.size() == '10F'||s1.size() == '11A'&&s2.size() == '11F'||s1.size() == '12A'&&s2.size() == '12F'||s1.size() == '13A'&&s2.size() == '13F'||s1.size() == '14A'&&s2.size() == '14F'||s1.size() == '15A'&&s2.size() == '15F'||s1.size() == '17A'&&s2.size() == '17F'){
		cout << '0';return 0;
	}
	if(s1.size() == '02B'&&s2.size() == '02A'||s1.size() == '03B'&&s2.size() == '03A'||s1.size() == '04B'&&s2.size() == '04A'||s1.size() == '05B'&&s2.size() == '05A'||s1.size() == '06B'&&s2.size() == '06A'||s1.size() == '07B'&&s2.size() == '07A'||s1.size() == '08B'&&s2.size() == '08A'||s1.size() == '09B'&&s2.size() == '09A'||s1.size() == '10B'&&s2.size() == '10A'||s1.size() == '11B'&&s2.size() == '11A'||s1.size() == '12B'&&s2.size() == '12A'||s1.size() == '13B'&&s2.size() == '13A'||s1.size() == '14B'&&s2.size() == '14A'||s1.size() == '15B'&&s2.size() == '15A'||s1.size() == '17B'&&s2.size() == '17A'){
		cout << '1';return 0;
	}
	if(s1.size() == '02B'&&s2.size() == '02C'||s1.size() == '03B'&&s2.size() == '03C'||s1.size() == '04B'&&s2.size() == '04C'||s1.size() == '05B'&&s2.size() == '05C'||s1.size() == '06B'&&s2.size() == '06C'||s1.size() == '07B'&&s2.size() == '07C'||s1.size() == '08B'&&s2.size() == '08C'||s1.size() == '09B'&&s2.size() == '09C'||s1.size() == '10B'&&s2.size() == '10C'||s1.size() == '11B'&&s2.size() == '11F'||s1.size() == '12B'&&s2.size() == '12F'||s1.size() == '13B'&&s2.size() == '13C'||s1.size() == '14B'&&s2.size() == '14C'||s1.size() == '15B'&&s2.size() == '15C'||s1.size() == '17B'&&s2.size() == '17C'){
		cout << '1';return 0;
	}
	if(s1.size() == '02B'&&s2.size() == '02D'||s1.size() == '03B'&&s2.size() == '03D'||s1.size() == '04B'&&s2.size() == '04D'||s1.size() == '05B'&&s2.size() == '05D'||s1.size() == '06B'&&s2.size() == '06D'||s1.size() == '07B'&&s2.size() == '07D'||s1.size() == '08B'&&s2.size() == '08D'||s1.size() == '09B'&&s2.size() == '09D'||s1.size() == '10B'&&s2.size() == '10D'||s1.size() == '11B'&&s2.size() == '11D'||s1.size() == '12B'&&s2.size() == '12D'||s1.size() == '13B'&&s2.size() == '13D'||s1.size() == '14B'&&s2.size() == '14D'||s1.size() == '15B'&&s2.size() == '15D'||s1.size() == '17B'&&s2.size() == '17D'){
		cout << '0';return 0;
	}
	if(s1.size() == '02B'&&s2.size() == '02F'||s1.size() == '03B'&&s2.size() == '03F'||s1.size() == '04B'&&s2.size() == '04F'||s1.size() == '05B'&&s2.size() == '05F'||s1.size() == '06B'&&s2.size() == '06F'||s1.size() == '07B'&&s2.size() == '07F'||s1.size() == '08B'&&s2.size() == '08F'||s1.size() == '09B'&&s2.size() == '09F'||s1.size() == '10B'&&s2.size() == '10F'||s1.size() == '11B'&&s2.size() == '11F'||s1.size() == '12B'&&s2.size() == '12F'||s1.size() == '13B'&&s2.size() == '13F'||s1.size() == '14B'&&s2.size() == '14F'||s1.size() == '15B'&&s2.size() == '15F'||s1.size() == '17B'&&s2.size() == '17F'){
		cout << '0';return 0;
	}
	if(s1.size() == '02C'&&s2.size() == '02A'||s1.size() == '03C'&&s2.size() == '03A'||s1.size() == '04C'&&s2.size() == '04A'||s1.size() == '05C'&&s2.size() == '05A'||s1.size() == '06C'&&s2.size() == '06A'||s1.size() == '07C'&&s2.size() == '07A'||s1.size() == '08C'&&s2.size() == '08A'||s1.size() == '09C'&&s2.size() == '09A'||s1.size() == '10C'&&s2.size() == '10A'||s1.size() == '11C'&&s2.size() == '11A'||s1.size() == '12C'&&s2.size() == '12A'||s1.size() == '13C'&&s2.size() == '13A'||s1.size() == '14C'&&s2.size() == '14A'||s1.size() == '15C'&&s2.size() == '15A'||s1.size() == '17C'&&s2.size() == '17A'){
		cout << '1';return 0;
	}
	if(s1.size() == '02C'&&s2.size() == '02B'||s1.size() == '03C'&&s2.size() == '03B'||s1.size() == '04C'&&s2.size() == '04B'||s1.size() == '05C'&&s2.size() == '05B'||s1.size() == '06C'&&s2.size() == '06B'||s1.size() == '07C'&&s2.size() == '07B'||s1.size() == '08C'&&s2.size() == '08B'||s1.size() == '09C'&&s2.size() == '09B'||s1.size() == '10C'&&s2.size() == '10B'||s1.size() == '11C'&&s2.size() == '11B'||s1.size() == '12C'&&s2.size() == '12B'||s1.size() == '13C'&&s2.size() == '13B'||s1.size() == '14C'&&s2.size() == '14B'||s1.size() == '15C'&&s2.size() == '15B'||s1.size() == '17C'&&s2.size() == '17B'){
		cout << '1';return 0;
	}
	if(s1.size() == '02C'&&s2.size() == '02D'||s1.size() == '03C'&&s2.size() == '03F'||s1.size() == '04C'&&s2.size() == '04F'||s1.size() == '05C'&&s2.size() == '05F'||s1.size() == '06C'&&s2.size() == '06F'||s1.size() == '07C'&&s2.size() == '07F'||s1.size() == '08C'&&s2.size() == '08F'||s1.size() == '09C'&&s2.size() == '09F'||s1.size() == '10C'&&s2.size() == '10F'||s1.size() == '11C'&&s2.size() == '11F'||s1.size() == '12C'&&s2.size() == '12F'||s1.size() == '13C'&&s2.size() == '13F'||s1.size() == '14C'&&s2.size() == '14D'||s1.size() == '15C'&&s2.size() == '15D'||s1.size() == '17C'&&s2.size() == '17D'){
		cout << '0';return 0;
	}
	if(s1.size() == '02C'&&s2.size() == '02F'||s1.size() == '03C'&&s2.size() == '03F'||s1.size() == '04C'&&s2.size() == '04F'||s1.size() == '05C'&&s2.size() == '05F'||s1.size() == '06C'&&s2.size() == '06F'||s1.size() == '07C'&&s2.size() == '07F'||s1.size() == '08C'&&s2.size() == '08F'||s1.size() == '09C'&&s2.size() == '09F'||s1.size() == '10C'&&s2.size() == '10F'||s1.size() == '11C'&&s2.size() == '11F'||s1.size() == '12C'&&s2.size() == '12F'||s1.size() == '13C'&&s2.size() == '13F'||s1.size() == '14C'&&s2.size() == '14F'||s1.size() == '15C'&&s2.size() == '15F'||s1.size() == '17C'&&s2.size() == '17F'){
		cout << '0';return 0;
	}
	if(s1.size() == '02D'&&s2.size() == '02A'||s1.size() == '03D'&&s2.size() == '03A'||s1.size() == '04F'&&s2.size() == '04A'||s1.size() == '05D'&&s2.size() == '05a'||s1.size() == '06D'&&s2.size() == '06A'||s1.size() == '07D'&&s2.size() == '07a'||s1.size() == '08D'&&s2.size() == '08A'||s1.size() == '09D'&&s2.size() == '09A'||s1.size() == '10D'&&s2.size() == '10A'||s1.size() == '11D'&&s2.size() == '11A'||s1.size() == '12D'&&s2.size() == '12A'||s1.size() == '13D'&&s2.size() == '13A'||s1.size() == '14D'&&s2.size() == '14A'||s1.size() == '15D'&&s2.size() == '15A'||s1.size() == '17D'&&s2.size() == '17A'){
		cout << '0';return 0;
	}
	if(s1.size() == '02D'&&s2.size() == '02B'||s1.size() == '03D'&&s2.size() == '03D'||s1.size() == '04F'&&s2.size() == '04B'||s1.size() == '05D'&&s2.size() == '05B'||s1.size() == '06D'&&s2.size() == '06B'||s1.size() == '07D'&&s2.size() == '07B'||s1.size() == '08D'&&s2.size() == '08B'||s1.size() == '09D'&&s2.size() == '09B'||s1.size() == '10D'&&s2.size() == '10B'||s1.size() == '11D'&&s2.size() == '11B'||s1.size() == '12D'&&s2.size() == '12B'||s1.size() == '13D'&&s2.size() == '13B'||s1.size() == '14D'&&s2.size() == '14B'||s1.size() == '15D'&&s2.size() == '15B'||s1.size() == '17D'&&s2.size() == '17B'){
		cout << '0';return 0;
	}
	if(s1.size() == '02D'&&s2.size() == '02C'||s1.size() == '03D'&&s2.size() == '03C'||s1.size() == '04F'&&s2.size() == '04C'||s1.size() == '05D'&&s2.size() == '05C'||s1.size() == '06D'&&s2.size() == '06C'||s1.size() == '07D'&&s2.size() == '07C'||s1.size() == '08D'&&s2.size() == '08C'||s1.size() == '09D'&&s2.size() == '09C'||s1.size() == '10D'&&s2.size() == '10C'||s1.size() == '11D'&&s2.size() == '11C'||s1.size() == '12D'&&s2.size() == '12C'||s1.size() == '13D'&&s2.size() == '13C'||s1.size() == '14D'&&s2.size() == '14F'||s1.size() == '15D'&&s2.size() == '15C'||s1.size() == '17D'&&s2.size() == '17C'){
		cout << '0';return 0;
	}
	if(s1.size() == '02D'&&s2.size() == '02F'||s1.size() == '03D'&&s2.size() == '03F'||s1.size() == '04F'&&s2.size() == '04F'||s1.size() == '05D'&&s2.size() == '05F'||s1.size() == '06D'&&s2.size() == '06F'||s1.size() == '07D'&&s2.size() == '07F'||s1.size() == '08D'&&s2.size() == '08F'||s1.size() == '09D'&&s2.size() == '09F'||s1.size() == '10D'&&s2.size() == '10F'||s1.size() == '11D'&&s2.size() == '11F'||s1.size() == '12D'&&s2.size() == '12F'||s1.size() == '13D'&&s2.size() == '13F'||s1.size() == '14D'&&s2.size() == '14F'||s1.size() == '15D'&&s2.size() == '15F'||s1.size() == '17D'&&s2.size() == '17F'){
		cout << '1';return 0;
	}
	if(s1.size() == '02F'&&s2.size() == '02A'||s1.size() == '03F'&&s2.size() == '03A'||s1.size() == '04F'&&s2.size() == '04A'||s1.size() == '05F'&&s2.size() == '05A'||s1.size() == '06F'&&s2.size() == '06A'||s1.size() == '07F'&&s2.size() == '07A'||s1.size() == '08F'&&s2.size() == '08A'||s1.size() == '09F'&&s2.size() == '09A'||s1.size() == '10F'&&s2.size() == '10A'||s1.size() == '11F'&&s2.size() == '11A'||s1.size() == '12F'&&s2.size() == '12A'||s1.size() == '13F'&&s2.size() == '13A'||s1.size() == '14F'&&s2.size() == '14A'||s1.size() == '15F'&&s2.size() == '15A'||s1.size() == '17F'&&s2.size() == '17A'){
		cout << '0';return 0;
	}
	if(s1.size() == '02F'&&s2.size() == '02B'||s1.size() == '03F'&&s2.size() == '03B'||s1.size() == '04F'&&s2.size() == '04B'||s1.size() == '05F'&&s2.size() == '05B'||s1.size() == '06F'&&s2.size() == '06B'||s1.size() == '07F'&&s2.size() == '07B'||s1.size() == '08F'&&s2.size() == '08B'||s1.size() == '09F'&&s2.size() == '09B'||s1.size() == '10F'&&s2.size() == '10B'||s1.size() == '11F'&&s2.size() == '11B'||s1.size() == '12F'&&s2.size() == '12B'||s1.size() == '13F'&&s2.size() == '13B'||s1.size() == '14F'&&s2.size() == '14B'||s1.size() == '15F'&&s2.size() == '15B'||s1.size() == '17F'&&s2.size() == '17B'){
		cout << '0';return 0;
	}
	if(s1.size() == '02F'&&s2.size() == '02C'||s1.size() == '03F'&&s2.size() == '03C'||s1.size() == '04F'&&s2.size() == '04C'||s1.size() == '05F'&&s2.size() == '05C'||s1.size() == '06F'&&s2.size() == '06C'||s1.size() == '07F'&&s2.size() == '07C'||s1.size() == '08F'&&s2.size() == '08C'||s1.size() == '09F'&&s2.size() == '09C'||s1.size() == '10F'&&s2.size() == '10C'||s1.size() == '11F'&&s2.size() == '11C'||s1.size() == '12F'&&s2.size() == '12C'||s1.size() == '13F'&&s2.size() == '13C'||s1.size() == '14F'&&s2.size() == '14C'||s1.size() == '15F'&&s2.size() == '15C'||s1.size() == '17F'&&s2.size() == '17C'){
		cout << '0';return 0;
	}
	if(s1.size() == '02F'&&s2.size() == '02D'||s1.size() == '03F'&&s2.size() == '03D'||s1.size() == '04F'&&s2.size() == '04D'||s1.size() == '05F'&&s2.size() == '05D'||s1.size() == '06F'&&s2.size() == '06D'||s1.size() == '07F'&&s2.size() == '07D'||s1.size() == '08F'&&s2.size() == '08D'||s1.size() == '09F'&&s2.size() == '09D'||s1.size() == '10F'&&s2.size() == '10D'||s1.size() == '11F'&&s2.size() == '11D'||s1.size() == '12F'&&s2.size() == '12D'||s1.size() == '13F'&&s2.size() == '13D'||s1.size() == '14F'&&s2.size() == '14D'||s1.size() == '15F'&&s2.size() == '15D'||s1.size() == '17F'&&s2.size() == '17D'){
		cout << '1';return 0;
	}
	if(s1.size() == 'D'&&s2.size() == 'F'){
		cout << '1'; return 0;
	}
	else{
		cout << '0';
		return 0;	
	}
	return 0;
} 

/* 两张车票对应的座位是否在同一节车厢；
 两张车票对应的座位是否在同一节车厢的同一排；
 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
 两张车票对应的座位是否相邻。*/
