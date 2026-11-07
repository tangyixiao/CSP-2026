#include <bits/stdc++.h>
using namespace std;
string s[14];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 4; i++) {
		cin >> s[i];
	}
	if (s[1] == s[3]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s[2] == "01A" && (s[4] == "01B" || s[4] == "01C" || s[4] == "01D" || s[4] == "01F")) {
		cout << 1;
		if (s[4] == "01B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "01C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "01B" && (s[4] == "01A" || s[4] == "01C" || s[4] == "01D" || s[4] == "01F")) {
		cout << 1;
		if (s[4] == "01A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "01C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "01C" && (s[4] == "01B" || s[4] == "01A" || s[4] == "01D" || s[4] == "01F")) {
		cout << 1;
		if (s[4] == "01B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "01A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "01D" && (s[4] == "01B" || s[4] == "01C" || s[4] == "01A" || s[4] == "01F")) {
		cout << 1;
		if (s[4] == "01F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "01F" && (s[4] == "01B" || s[4] == "01C" || s[4] == "01D" || s[4] == "01A")) {
		cout << 1;
		if (s[4] == "01D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "02A" && (s[4] == "02B" || s[4] == "02C" || s[4] == "02D" || s[4] == "02F")) {
		cout << 1;
		if (s[4] == "02B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "02C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "02B" && (s[4] == "02A" || s[4] == "02C" || s[4] == "02D" || s[4] == "02F")) {
		cout << 1;
		if (s[4] == "02A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "02C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "02C" && (s[4] == "02B" || s[4] == "02A" || s[4] == "02D" || s[4] == "02F")) {
		cout << 1;
		if (s[4] == "02B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "02A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "02D" && (s[4] == "02B" || s[4] == "02C" || s[4] == "02A" || s[4] == "02F")) {
		cout << 1;
		if (s[4] == "02F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "02F" && (s[4] == "02B" || s[4] == "02C" || s[4] == "02D" || s[4] == "02A")) {
		cout << 1;
		if (s[4] == "02D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "03A" && (s[4] == "03B" || s[4] == "03C" || s[4] == "03D" || s[4] == "03F")) {
		cout << 1;
		if (s[4] == "03B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "03C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "03B" && (s[4] == "03A" || s[4] == "03C" || s[4] == "03D" || s[4] == "03F")) {
		cout << 1;
		if (s[4] == "03A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "03C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "03C" && (s[4] == "03A" || s[4] == "03B" || s[4] == "03D" || s[4] == "03F")) {
		cout << 1;
		if (s[4] == "03B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "03A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "03D" && (s[4] == "03A" || s[4] == "03C" || s[4] == "03B" || s[4] == "03F")) {
		cout << 1;
		if (s[4] == "03F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "03F" && (s[4] == "03A" || s[4] == "03B" || s[4] == "03D" || s[4] == "03C")) {
		cout << 1;
		if (s[4] == "03D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "04A" && (s[4] == "04C" || s[4] == "04B" || s[4] == "04D" || s[4] == "04F")) {
		cout << 1;
		if (s[4] == "04B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "04C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "04B" && (s[4] == "04A" || s[4] == "04C" || s[4] == "04D" || s[4] == "04F")) {
		cout << 1;
		if (s[4] == "04C") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "04A") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "04C" && (s[4] == "04A" || s[4] == "04B" || s[4] == "04D" || s[4] == "04F")) {
		cout << 1;
		if (s[4] == "04B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "04A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "04D" && (s[4] == "04C" || s[4] == "04B" || s[4] == "04A" || s[4] == "04F")) {
		cout << 1;
		if (s[4] == "04F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "04F" && (s[4] == "04C" || s[4] == "04B" || s[4] == "04D" || s[4] == "04A")) {
		cout << 1;
		if (s[4] == "04D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "05A" && (s[4] == "05C" || s[4] == "05B" || s[4] == "05D" || s[4] == "05F")) {
		cout << 1;
		if (s[4] == "05B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "05C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "05B" && (s[4] == "05C" || s[4] == "05A" || s[4] == "05D" || s[4] == "05F")) {
		cout << 1;
		if (s[4] == "05A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "05C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "05C" && (s[4] == "05A" || s[4] == "05B" || s[4] == "05D" || s[4] == "05F")) {
		cout << 1;
		if (s[4] == "05B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "05A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "05D" && (s[4] == "05C" || s[4] == "05B" || s[4] == "05A" || s[4] == "05F")) {
		cout << 1;
		if (s[4] == "05F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "05F" && (s[4] == "05C" || s[4] == "05B" || s[4] == "05D" || s[4] == "05A")) {
		cout << 1;
		if (s[4] == "05D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "06A" && (s[4] == "06C" || s[4] == "06B" || s[4] == "06D" || s[4] == "06F")) {
		cout << 1;
		if (s[4] == "06B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "06C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "06B" && (s[4] == "06C" || s[4] == "06A" || s[4] == "06D" || s[4] == "06F")) {
		cout << 1;
		if (s[4] == "06A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "06C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "06C" && (s[4] == "06A" || s[4] == "06B" || s[4] == "06D" || s[4] == "06F")) {
		cout << 1;
		if (s[4] == "06B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "06A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "06D" && (s[4] == "06C" || s[4] == "06B" || s[4] == "06A" || s[4] == "06F")) {
		cout << 1;
		if (s[4] == "06F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "06F" && (s[4] == "06C" || s[4] == "06B" || s[4] == "06D" || s[4] == "06F")) {
		cout << 1;
		if (s[4] == "06D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "07A" && (s[4] == "07C" || s[4] == "07B" || s[4] == "07D" || s[4] == "07F")) {
		cout << 1;
		if (s[4] == "07B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "07C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "07B" && (s[4] == "07C" || s[4] == "07A" || s[4] == "07D" || s[4] == "07F")) {
		cout << 1;
		if (s[4] == "07A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "07C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "07C" && (s[4] == "07A" || s[4] == "07B" || s[4] == "07D" || s[4] == "07F")) {
		cout << 1;
		if (s[4] == "07B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "07A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "07D" && (s[4] == "07C" || s[4] == "07B" || s[4] == "07A" || s[4] == "07F")) {
		cout << 1;
		if (s[4] == "07F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "07F" && (s[4] == "07C" || s[4] == "07B" || s[4] == "07D" || s[4] == "07F")) {
		cout << 1;
		if (s[4] == "07D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "08A" && (s[4] == "08C" || s[4] == "08B" || s[4] == "08D" || s[4] == "08F")) {
		cout << 1;
		if (s[4] == "08B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "08C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "08B" && (s[4] == "08C" || s[4] == "08A" || s[4] == "08D" || s[4] == "08F")) {
		cout << 1;
		if (s[4] == "08A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "08C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "08C" && (s[4] == "08A" || s[4] == "08B" || s[4] == "08D" || s[4] == "08F")) {
		cout << 1;
		if (s[4] == "08B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "08A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "08D" && (s[4] == "08C" || s[4] == "08B" || s[4] == "08A" || s[4] == "08F")) {
		cout << 1;
		if (s[4] == "08F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "08F" && (s[4] == "08C" || s[4] == "08B" || s[4] == "08D" || s[4] == "08F")) {
		cout << 1;
		if (s[4] == "08D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "09A" && (s[4] == "09C" || s[4] == "09B" || s[4] == "09D" || s[4] == "09F")) {
		cout << 1;
		if (s[4] == "09B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "08C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "09B" && (s[4] == "09C" || s[4] == "09A" || s[4] == "09D" || s[4] == "09F")) {
		cout << 1;
		if (s[4] == "09A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "09C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "09C" && (s[4] == "09A" || s[4] == "09B" || s[4] == "09D" || s[4] == "09F")) {
		cout << 1;
		if (s[4] == "09B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "09A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "09D" && (s[4] == "09C" || s[4] == "09B" || s[4] == "09A" || s[4] == "09F")) {
		cout << 1;
		if (s[4] == "09F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "09F" && (s[4] == "09C" || s[4] == "09B" || s[4] == "09D" || s[4] == "09F")) {
		cout << 1;
		if (s[4] == "09D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "10A" && (s[4] == "10C" || s[4] == "10B" || s[4] == "10D" || s[4] == "10F")) {
		cout << 1;
		if (s[4] == "10B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "10C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "10B" && (s[4] == "10C" || s[4] == "10A" || s[4] == "10D" || s[4] == "10F")) {
		cout << 1;
		if (s[4] == "10A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "10C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "10C" && (s[4] == "10A" || s[4] == "10B" || s[4] == "10D" || s[4] == "10F")) {
		cout << 1;
		if (s[4] == "10B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "10A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "10D" && (s[4] == "10C" || s[4] == "10B" || s[4] == "10A" || s[4] == "10F")) {
		cout << 1;
		if (s[4] == "10F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "10F" && (s[4] == "10C" || s[4] == "10B" || s[4] == "10D" || s[4] == "10A")) {
		cout << 1;
		if (s[4] == "10D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "11A" && (s[4] == "11C" || s[4] == "11B" || s[4] == "11D" || s[4] == "11F")) {
		cout << 1;
		if (s[4] == "11B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "11C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "11B" && (s[4] == "11C" || s[4] == "11A" || s[4] == "11D" || s[4] == "11F")) {
		cout << 1;
		if (s[4] == "11A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "11C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "11C" && (s[4] == "11A" || s[4] == "11B" || s[4] == "11D" || s[4] == "11F")) {
		cout << 1;
		if (s[4] == "11B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "11A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "11D" && (s[4] == "11C" || s[4] == "11B" || s[4] == "11A" || s[4] == "11F")) {
		cout << 1;
		if (s[4] == "11F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "11F" && (s[4] == "11C" || s[4] == "11B" || s[4] == "11D" || s[4] == "11A")) {
		cout << 1;
		if (s[4] == "11D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "12A" && (s[4] == "12C" || s[4] == "12B" || s[4] == "12D" || s[4] == "12F")) {
		cout << 1;
		if (s[4] == "12B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "12C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "12B" && (s[4] == "12C" || s[4] == "12A" || s[4] == "12D" || s[4] == "12F")) {
		cout << 1;
		if (s[4] == "12A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "12C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "12C" && (s[4] == "12A" || s[4] == "12B" || s[4] == "12D" || s[4] == "12F")) {
		cout << 1;
		if (s[4] == "12B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "12A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "12D" && (s[4] == "12C" || s[4] == "12B" || s[4] == "12A" || s[4] == "12F")) {
		cout << 1;
		if (s[4] == "12F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "12F" && (s[4] == "12C" || s[4] == "12B" || s[4] == "12D" || s[4] == "12A")) {
		cout << 1;
		if (s[4] == "12D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "13A" && (s[4] == "13C" || s[4] == "13B" || s[4] == "13D" || s[4] == "13F")) {
		cout << 1;
		if (s[4] == "13B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "13C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "13B" && (s[4] == "13C" || s[4] == "13A" || s[4] == "13D" || s[4] == "13F")) {
		cout << 1;
		if (s[4] == "13A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "13C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "13C" && (s[4] == "13A" || s[4] == "13B" || s[4] == "13D" || s[4] == "13F")) {
		cout << 1;
		if (s[4] == "13B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "13A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "13D" && (s[4] == "13C" || s[4] == "13B" || s[4] == "13A" || s[4] == "13F")) {
		cout << 1;
		if (s[4] == "13F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "13F" && (s[4] == "13C" || s[4] == "13B" || s[4] == "13D" || s[4] == "13A")) {
		cout << 1;
		if (s[4] == "13D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "14A" && (s[4] == "14C" || s[4] == "14B" || s[4] == "14D" || s[4] == "14F")) {
		cout << 1;
		if (s[4] == "14B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "14C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "14B" && (s[4] == "14C" || s[4] == "14A" || s[4] == "14D" || s[4] == "14F")) {
		cout << 1;
		if (s[4] == "14A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "14C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "14C" && (s[4] == "14A" || s[4] == "14B" || s[4] == "14D" || s[4] == "14F")) {
		cout << 1;
		if (s[4] == "14B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "14A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "14D" && (s[4] == "14C" || s[4] == "14B" || s[4] == "14A" || s[4] == "14F")) {
		cout << 1;
		if (s[4] == "14F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "14F" && (s[4] == "14C" || s[4] == "14B" || s[4] == "14D" || s[4] == "14A")) {
		cout << 1;
		if (s[4] == "14D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "15A" && (s[4] == "15C" || s[4] == "15B" || s[4] == "15D" || s[4] == "15F")) {
		cout << 1;
		if (s[4] == "15B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "15C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "15B" && (s[4] == "15C" || s[4] == "15A" || s[4] == "15D" || s[4] == "15F")) {
		cout << 1;
		if (s[4] == "15A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "15C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "15C" && (s[4] == "15A" || s[4] == "15B" || s[4] == "15D" || s[4] == "15F")) {
		cout << 1;
		if (s[4] == "15B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "15A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "15D" && (s[4] == "15C" || s[4] == "15B" || s[4] == "15A" || s[4] == "15F")) {
		cout << 1;
		if (s[4] == "15F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "15F" && (s[4] == "15C" || s[4] == "15B" || s[4] == "15D" || s[4] == "15A")) {
		cout << 1;
		if (s[4] == "15D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "16A" && (s[4] == "16C" || s[4] == "16B" || s[4] == "16D" || s[4] == "16F")) {
		cout << 1;
		if (s[4] == "16B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "16C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "16B" && (s[4] == "16C" || s[4] == "16A" || s[4] == "16D" || s[4] == "16F")) {
		cout << 1;
		if (s[4] == "16A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "16C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "16C" && (s[4] == "16A" || s[4] == "16B" || s[4] == "16D" || s[4] == "16F")) {
		cout << 1;
		if (s[4] == "16B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "16A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "16D" && (s[4] == "16C" || s[4] == "16B" || s[4] == "16A" || s[4] == "16F")) {
		cout << 1;
		if (s[4] == "16F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "16F" && (s[4] == "16C" || s[4] == "16B" || s[4] == "16D" || s[4] == "16A")) {
		cout << 1;
		if (s[4] == "16D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "17A" && (s[4] == "17C" || s[4] == "17B" || s[4] == "17D" || s[4] == "17F")) {
		cout << 1;
		if (s[4] == "17B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "17C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "17B" && (s[4] == "17C" || s[4] == "17A" || s[4] == "17D" || s[4] == "17F")) {
		cout << 1;
		if (s[4] == "17A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "17C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "17C" && (s[4] == "17A" || s[4] == "17B" || s[4] == "17D" || s[4] == "17F")) {
		cout << 1;
		if (s[4] == "17B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "17A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "17D" && (s[4] == "17C" || s[4] == "17B" || s[4] == "17A" || s[4] == "17F")) {
		cout << 1;
		if (s[4] == "17F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "17F" && (s[4] == "17C" || s[4] == "17B" || s[4] == "17D" || s[4] == "17A")) {
		cout << 1;
		if (s[4] == "17D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "18A" && (s[4] == "18C" || s[4] == "18B" || s[4] == "18D" || s[4] == "18F")) {
		cout << 1;
		if (s[4] == "18B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "18C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "18B" && (s[4] == "18C" || s[4] == "18A" || s[4] == "18D" || s[4] == "18F")) {
		cout << 1;
		if (s[4] == "18A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "18C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "18C" && (s[4] == "18A" || s[4] == "18B" || s[4] == "18D" || s[4] == "18F")) {
		cout << 1;
		if (s[4] == "18B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "18A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "18D" && (s[4] == "18C" || s[4] == "18B" || s[4] == "18A" || s[4] == "18F")) {
		cout << 1;
		if (s[4] == "18F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "18F" && (s[4] == "18C" || s[4] == "18B" || s[4] == "18D" || s[4] == "18A")) {
		cout << 1;
		if (s[4] == "18D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "19A" && (s[4] == "19C" || s[4] == "19B" || s[4] == "19D" || s[4] == "19F")) {
		cout << 1;
		if (s[4] == "19B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "19C") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "19B" && (s[4] == "19C" || s[4] == "19A" || s[4] == "19D" || s[4] == "19F")) {
		cout << 1;
		if (s[4] == "19A") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "19C") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "19C" && (s[4] == "19A" || s[4] == "19B" || s[4] == "19D" || s[4] == "19F")) {
		cout << 1;
		if (s[4] == "19B") {
			cout << 1;
			cout << 1;
		} else if (s[4] == "19A") {
			cout << 1;
			cout << 0;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "19D" && (s[4] == "19C" || s[4] == "19B" || s[4] == "19A" || s[4] == "19F")) {
		cout << 1;
		if (s[4] == "19F") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else if (s[2] == "19F" && (s[4] == "19C" || s[4] == "19B" || s[4] == "19D" || s[4] == "19A")) {
		cout << 1;
		if (s[4] == "19D") {
			cout << 1;
			cout << 1;
		} else {
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
	}
	return 0;
}
