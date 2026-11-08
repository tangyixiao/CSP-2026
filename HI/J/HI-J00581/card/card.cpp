#include<bits/stdc++.h>
using namespace std;

int n, m, tmp;
int num[300325], ans[300799];
vector<int> cards;
stack<int> s;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> tmp;
		cards.push_back(tmp);
	}
	
	for(int i=0; i<cards.size(); i++){
		for(int j=1; j<=m; j++) num[j] = 0;
		for(int j=i; j<cards.size(); j++){
			if(num[cards[j]]){
				while(s.top()!=cards[j]){
					if(s.empty()) break;
					num[s.top()] = 0;
					s.pop();
				}
				num[s.top()] = 0;
				s.pop();
			}
			s.push(cards[j]);
			num[cards[j]]++;
		}
		
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	
	for(int i=1; i<=m; i++) cout << ans[i] << " ";
	return 0;
} 
