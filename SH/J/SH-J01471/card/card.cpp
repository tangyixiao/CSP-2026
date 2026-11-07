#include<bits/stdc++.h>
using namespace std;
const int MAXN = 50010;
const int MAXM = 30010;
//int card_num[MAXM] = {0};
queue<int> to_do;
stack<int>st;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int card_begin[n];
	vector<int>cnt(m+10,0);
	for(int i = 0; i < n; ++ i) {
		cin >> card_begin[i];
	}
	int k = 0;
	while(n - k) {
//		cout << 0 << '\n';
		while(!to_do.empty()) {
			to_do.pop();
		}
		while(!st.empty()) {
			st.pop();
		}

//		queue<int> to_do;
//		cout << 1 << '\n';

		for(int i = k; i < n; ++ i) {
			to_do.push(card_begin[i]);
		}
		int card_num[m+ 10] = {0};
		//setup_end
		//
		//main
//		cout << 2 << '\n';
		while(!to_do.empty()) {
//			if(i < k)
//				to_do.pop();
			if(card_num[to_do.front()] == 0) {
				++card_num[to_do.front()];
				st.push(to_do.front());
				to_do.pop();
			} else {
				while(st.top() != to_do.front()) {
					--card_num[st.top()];
					st.pop();
				}
//				-- card_num[st.top()];
//				st.pop();
				to_do.pop();
			}
//			cout << '#' << i << ' ';
		}
//		cout << 3;
		for(int i = 1; i <= m; ++ i)
			if(card_num[i] != 0)
				++cnt[i];
		//main_end
		//
		//cnt
		++k;
	}
	for(int i = 1; i <= m; ++ i)
		cout << cnt[i] << ' ';

	return 0;
}
