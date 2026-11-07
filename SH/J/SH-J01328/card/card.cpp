#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int cnt[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	string ans = "";
	cin >> n >> m;
	for(int i=1;i <= n;i++){
		string x;
		cin >> x;
		ans += x;
	}
	for(int i=1;i <= n;i++){
		vector<char>v;
		for(int j=i-1;j < ans.size();j++){
			int dis = -1;
			if(j == 0){
				v.push_back(ans[j]);
				continue;
			}
			for(int z=0;z < v.size();z++){
				if(ans[j] == v[z]){
					dis = z;
				}
			}
			if(dis != -1) v.clear();
			v.push_back(ans[j]);
		}
		for(auto c : v) cnt[c-'0']++;
	}
	for(int i=1;i <= m;i++) cout << cnt[i] << " ";
	return 0;
} 
