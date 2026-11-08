#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s2, s3, s4;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3) {
		cout << '1';
		if (s2.substr(0, 2) == s4.substr(0, 2)) {
			cout << '1';
			if (((s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && (s4[2] == 'A' || s4[2] == 'B' || s4[2] == 'C')) || ((s2[2] == 'D' || s2[2] == 'F') && (s4[2] == 'D' || s4[2] == 'F'))) {
				cout << '1';
				if ((s2[2] == 'A' && s4[2] == 'B') || (s2[2] == 'B' && s4[2] == 'C') || (s2[2] == 'D' && s4[2] == 'F')) cout << "1\n";
				else cout << "0\n";
			} else cout << "00\n";
		} else cout << "000\n";
	} else cout << "0000\n";
	return 0;
}
// I'll start CSP-J 8 after 8 mins. I think I actually cannot AK. But please give me 300+ points, or I'll quiet OI.
// Although CSP-S isn't more important than CSP-S
// First, I wanna solve T3. I thought it about 1min.
// Oh my solution to T3 is wrong!!!!
// start T2 at 8:45
// it's deque, ACed it at 8:55
// continue think T3 at 8:57
// omg I've thought it was |, but it's &!!!
// ok I know how to solve it now. 9:03
// !!!!!solved T3 at 9:18
// there're two problems I haven't solved: T1 and T4
// Let's read T4 and try to pianfen or zhengjie
// I'll start T1 at 10:00 and finish brute of T4 at 10:00, and start duipai at about 10:10
// T4 looks like a siweiti, it doesn't looks like a dp, I know a O(n^2) algorithm. 
// No!! this xingzhi I've thought appears useless :)
// let's brute!!! 9:48
// ok I've done T4's brute, and it can get 48 points....
// now I have 0 + 100 + 100 + 48, let's start T1!!!
// Let me eat a chocolate first :)
// 10:20 solved T1, and it used to be hacked by me, I'm afried it will be hacked again.
// now 100 + 100 + 100 + 48, can I AK in an hour??? I think I can't, so let's pianfen.......
// omg!!! my code seems to be correct in teshuxingzhi B, no wonder it passed card5.
// so we can think about teshuxingzhi A.
// is seems to be very easy!!! let's coding :) now 10:28
//10:57  100 + 100 + 100 + (18/25 * 100) = 372?
// let me make some date to test T4 and T3
// ok, they're good.
// at least, I do better than last year, it was 100 + 100 + 55 + 40.
// I mostly afried of my T1, It possiblely guafen
// through some rand tests, my T4 can accept m = 3000 and n = 2e5, so I think i can get 100 + 100 + 100 + 80?
// it may not good emough in my class (I think there're 10+ AKers in my class), but it's ok for me.
// oh! I didn't notice the time, it's 11:30, but the end of the CSP-J is 12:00, what can I do????
// ok, let's eat some snacks..... 
//Let me do some final tests
//16min
// my luogu's username is cqbz_ycr, if you find my code, can you @ me at luogu???? thank you very much!!!!
// byebye!!!!!!!!!!!!
