#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool find(stack<int> s, int a){
	while(!s.empty()){
		if(s.top() == a) return true;
		s.pop();
	}
	return false;
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	stack<int> s;
	vector<int> v(n);
	vector<int> ans(m, 0);
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 0; i < n; i++){
		for(int k = n - 1; k >= i; k--){
			if(find(s, v[k])){
				while(s.top() != v[k]) s.pop();
				s.pop();
			}
			s.push(v[k]);
		}
		while(!s.empty()){
			ans[s.top() - 1] += 1;
			s.pop();
		}
	}
	for(int i = 0; i < m; i++){
		cout << ans[i] << ' '; 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
