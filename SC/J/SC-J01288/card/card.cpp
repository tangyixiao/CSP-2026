#include <bits/stdc++.h>
using namespace std;

const int maxN = 5*1e5+10, maxM = 3*1e5+10;
int n, m;
int points[maxN], ans[maxM];
vector <int> pokers;

void out(int point){
	int len = pokers.size();
	int pos = -1;
	bool at = false;
	for(int i = 0; i < len; ++i)
		if(point == pokers[i]){
			at = true;
			pos = i;
		}
	if(at)
		for(int i = 0; i < len-pos; ++i)
			pokers.pop_back();
	pokers.push_back(point);
}


int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
		cin >> points[i];
	for(int i = 0; i < n; ++i){
		for(int j = i; j < n; ++j) out(points[j]);
		for(auto k : pokers) ++ans[k];
		pokers.clear();
	}
	for(int i = 1; i <= m; ++i)
		cout << ans[i] << ' ';
	return 0;
}