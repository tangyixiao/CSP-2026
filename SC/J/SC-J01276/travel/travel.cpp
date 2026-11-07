#include <bits/stdc++.h>
using namespace std;
#define fir(i, l, r) for(int i = (l); i <= (int) r; i++) 
#define fpr(i, l, r) for(int i = (r); i >= (int) l; i--)
/*
FAKE !! // freopen(".in", "r", stdin);
FAKE !! // froepen(".out, "w", stdout);
bestart AK ioi
xie_yu_fei AK ioi
@Hamburger999 女装！！！！！！！！！！！

---------------------------------------------------------

don't use x1 y1 ....!!!

*/
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1_, s1_, c2_, s2_;
	cin >> c1_ >> s1_ >> c2_ >> s2_;
	cout << (c1_ == c2_);
	cout << ((c1_ == c2_) && s1_.substr(0, 2) == s2_.substr(0, 2));
	cout << ((c1_ == c2_) && (s1_.substr(0, 2) == s2_.substr(0, 2)) && ((s1_[2] <= 'C' && s2_[2] <= 'C') || (s1_[2] >= 'D' && s2_[2] >= 'D')));
	cout << ((c1_ == c2_) && (s1_.substr(0, 2) == s2_.substr(0, 2)) && (abs(s1_[2] - s2_[2]) <= 1 && ((s1_[2] <= 'C' && s2_[2] <= 'C') || (s1_[2] >= 'D' && s2_[2] >= 'D'))));
	return 0;
}