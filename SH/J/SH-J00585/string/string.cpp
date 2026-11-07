#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;

int n;
struct pa{
	char s; int l;
};
pa li[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	ll l = 0, r = 0;
	for (int i = 1; i <= n; i++) {
		cin >> li[i].l >> li[i].s;
	}
	
	int il = 1, ir = n;
	ll ans = 0;	
	while (il < ir){
		if (li[il].l > li[ir].l){ // ”“±ﬂ»”µÙ 
			if (li[il].s != li[ir].s){
				ans += li[ir].l;
			}
			li[il].l -= li[ir].l;
			ir--;
		} else if (li[il].l < li[ir].l){ // ◊Û±ﬂ»”µÙ 
			if (li[il].s != li[ir].s){
				ans += li[il].l;
			}
			li[ir].l -= li[il].l;
			il++;
			
		} else { // ¡Ω∏ˆ“ª—˘£¨»´≤ø»”µÙ 
			if (li[il].s != li[ir].s){
				ans += li[il].l;
			}
			il++; ir--;
		}
	}
	cout << ans;
	return 0;
}
