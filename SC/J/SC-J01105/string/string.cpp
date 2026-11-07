#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+10;
struct st{
	ll num;
	char ch;
};
deque<st> dq;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	ll ans = 0;
	st a,b,c;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> c.num >> c.ch;
		dq.push_back(c);
	}
	while(dq.size()){
		a = dq.front();
		b = dq.back();
		dq.pop_front();
		if(dq.size()){
			dq.pop_back();
		}
		if(a.ch == b.ch){
			if(a.num > b.num){
				a.num -= b.num;
				dq.push_front(a);
			}else if(a.num < b.num){
				b.num -= a.num;
				dq.push_back(b);
			}
		}else{
			if(a.num > b.num){
				ans += b.num;
				a.num -= b.num;
				dq.push_front(a);
			}else if(a.num < b.num){
				ans += a.num;
				b.num -= a.num;
				dq.push_back(b);
			}else{
				ans += a.num;
			}
		}
	}
	cout << ans;
	return 0;
} 