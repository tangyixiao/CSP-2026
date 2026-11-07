#include <bits/stdc++.h>
using namespace std;
#define int long long
struct nod{
	int a, b;
};
int n, ans = 0, cnt = 0;
deque<nod> dq;
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		int inp;
		char xp;
		cin >> inp >> xp;
		dq.push_back({inp, (xp - 'a')});
		cnt += inp;
	}
	while(!dq.empty()){
		nod t1 = dq.front(), t2 = dq.back();
		if(t1.b != t2.b){
			ans += min(t1.a, t2.a);
		}
		if(dq.size() == 1)dq.pop_front();
		else{
			if(t1.a < t2.a){
				dq.pop_front(), dq.pop_back();
				dq.push_back({t2.a - t1.a, t2.b});
			}
			else if(t1.a > t2.a){
				dq.pop_front(), dq.pop_back();
				dq.push_front({t1.a - t2.a, t1.b});
			}
			else{
				dq.pop_front(), dq.pop_back();
			}
		}
	}
	cout << ans;
	return 0;
}