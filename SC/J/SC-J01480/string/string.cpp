#include <bits/stdc++.h>
using namespace std;
long long n, ans;
struct node {
	char c;
	long long num;
};
node w[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i].num >> w[i].c;
	}
	long long l = 1, r = n; 
	while (l < r) { 
		long long change;
		if(w[l].num<w[r].num) change=w[l].num;
		else change=w[r].num;
		w[l].num-=change;
		w[r].num-=change;
		if(w[l].c!=w[r].c){
			ans+=change;
		}
		if(w[l].num<=0) l++;
		if(w[r].num<=0) r--;
	}
	cout <<ans;
	return 0;
}