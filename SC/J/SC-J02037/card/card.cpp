#include<bits/stdc++.h>
using namespace std;
int n,m;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	vector<int> a(n + 1);
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	vector<int> b = a;
	sort(b.begin() + 1,b.end(),less<int>());
	if(b == a){
		vector<int> card,ans(m + 1);
		for(int i = n;i >= 1;i--){
			card.push_back(a[i]);
			card.erase(unique(card.begin(),card.end()),card.end());
			for(int j = 0;j < card.size();j++){
				ans[card[j]]++;
			}
		}
		for(int i = 1;i <= m;i++){
			cout << ans[i] << ' ';
		}
		return 0;
	}
	vector<int> card,cnt(m + 1),ans(m + 1);
	int t = 0;
	for(int i = n;i >= 1;i--){
		card.push_back(a[i]);
		t++;
		for(int j = t - 1;j >= 0;j--){
			int idx = -1;
			for(int k = j - 1;k >= 0;k--){
				if(card[j] == card[k]){
					idx = k;
					break;
				}
			}
			if(idx == -1){
				ans[card[j]]++;
				continue;
			}
			ans[card[j]]++;
			j = idx;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
signed main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
cin >> n >> m;
vector<int> a(n + 1);
for(int i = 1;i <= n;i++){
cin >> a[i];
}
vector<int> card,cnt(m + 1),ans(m + 1);
int t = 0;
for(int i = n;i >= 1;i--){
card.push_back(a[i]);
t++;
vector<pair<bool,int>> vis(m + 1,{false,0});
int last = 0;
vector<pair<int,int>> v;
for(int j = 0;j < t;j++){
if(vis[card[j]].first == false){
vis[card[j]].first = true;
vis[card[j]].second = j;
}
else if(last <= vis[card[j]].second){
v.push_back({vis[card[j]].second,j});
last = j;
}
}
vector<bool> ok(n + 1,true);
for(pair<int,int> p : v){
for(int j = p.first + 1;j < p.second;j++){
ok[j] = false;
}
}
vector<bool> flag(n + 1,false);
for(int j = 0;j < t;j++){
if(ok[j] == true){
flag[card[j]] = true;
}
}
for(int j = 1;j <= m;j++){
if(ok[j] == true){
ans[j]++;	
}
}
}
for(int i = 1;i <= m;i++){
cout << ans[i] << ' ';
}
return 0;
}
*/