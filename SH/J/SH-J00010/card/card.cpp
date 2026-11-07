//card
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int cards[500005];
ll ans[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ll n, m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> cards[i];
	}
	
	for (int i=1;i<=n;i++){
		stack<int> s;
		bool in[300005];
		memset(in, 0, sizeof(in));
		for (int j=i;j<=n;j++){
			
			
			if (in[cards[j]]){
				while (s.top()!=cards[j]){
					in[s.top()] = false;
					s.pop();
				}
			}else{
				in[cards[j]] = true;
				s.push(cards[j]);
			}
		}
		while (!s.empty()){
//			cout << s.top() << endl;
			s.pop();
		}
		for (int j=1;j<=m;j++){
			ans[j] += in[j];
		}
	}
	for (int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

