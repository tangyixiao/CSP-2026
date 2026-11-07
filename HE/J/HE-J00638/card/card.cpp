#include<bits/stdc++.h>
using namespace std;

const int N = 5e5+5;

int n,m;


int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	vector<int>p(N),sum(N);
	for(int i = 1;i<=n;++i) cin >> p[i];
	stack<int> s;
	p[0] = 0;
	for(int i = 1;i<=n;++i){
		vector<int> te;
		te[0] = 0; 
		p.erase(p.begin());
		s.push(p[i]);
		te.insert(te.end(),p[i]);
		for(int j = 2;j<=n-i;++j){
			te.insert(te.end(),p[j]);
			if(te.size() >= 3 && count(te.begin(),te.end(),p[j])){
				while(!s.empty() && s.top()!=p[j]){
					s.pop();
					te.erase(te.end());
				}
				s.pop();
				te.erase(te.end());
			}
			else{
				s.push(p[i]);
			}
		}
		for(int j = 1;j<=n;++j){
			sum[p[j]] ++;
		}
	}
	
	for(int i = 1;i<=m;++i){
		cout << sum[i];
	}
	
}
