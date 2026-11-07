#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	vector<int> a(n+1),cnt(m+1);
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=1;i<=n;i++){
		vector<int> card;
		vector<bool> seen(m+1); 
		for (int j=i;j<=n;j++){
			if (seen[a[j]]){
				while(!card.empty() && card[card.size()-1] != a[j]){
					seen[card[card.size()-1]] = 0; 
					card.pop_back(); 
				}
			}
			else{
				card.push_back(a[j]);
				seen[a[j]] = 1;
			}
		} 
		for (const auto& x : card) cnt[x]++; 
	}
	for (int i=1;i<=m;i++) cout << cnt[i] << " ";
	return 0;
}
