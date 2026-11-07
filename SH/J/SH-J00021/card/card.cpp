#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int> a(n),ans(m + 1);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		vector<int>place(m + 1,-1),cur(m);
		place[a[i]] = 1;
		int r = 1;
		cur[0] = a[i];
		for(int j = i + 1;j < n;j++){
			if(place[a[j]] > 0 && place[a[j]] <= r){
				r = place[a[j]];
			}else{
				cur[r] = a[j];
				place[a[j]] = ++r;
			}
		}
		for(int j = 0;j < r;j++){
			ans[cur[j]]++;
		}
	}
	for(int j = 1;j <= m;j++){
		cout << ans[j] << ' ';
	}
	return 0;
}
