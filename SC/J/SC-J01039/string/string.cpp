#include <bits/stdc++.h>
using namespace std;
struct node{
	long long k;
	char z;
};
stack<node> a, b, c;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		node w;
		cin >> w.k >> w.z;
		a.push(w);
		c.push(w);
	}
	while(!c.empty()){
		b.push(c.top());
		c.pop();
	}
	while(!a.empty()){
		node x = a.top();
		node y = b.top();
		a.pop();
		b.pop();
		if (x.z != y.z ){
			if (x.k < y.k ){
				ans += x.k;
				y.k -= x.k;
				b.push(y);
			}else if (x.k > y.k){
				ans += y.k;
				x.k -= y.k;
				a.push(x);
			}else{
				ans += x.k;
			}
		}else {
			if (x.k < y.k ){
				y.k -= x.k;
				b.push(y);
			}else if (x.k > y.k){
				x.k -= y.k;
				a.push(x);
			}
		}
	}
	cout << ans / 2;
	return 0;
} 