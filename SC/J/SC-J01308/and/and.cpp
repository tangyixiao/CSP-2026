#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int n,m;
int a[maxn];
int cnt[30];
vector<int> v[30],x;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n >> m;
	for (int i = 1;i <= n;i ++){
		cin >> a[i];
		for (int j = 22;j >= 0;j --){
			if (a[i] & (1 << j)){
				cnt[j] ++;
				v[j].push_back(a[i]);
			}
		}
	}
	int mx = -1,lmx = 0;
	for (int i = 22;i >= 0;i --){
		if(cnt[i] >= m){
			mx = i;
			break;
		}
	}
//	cout << mx << " "; 
	lmx = mx;
	while(1){
		x = v[mx];
		for (int i = 22;i >= 0;i --){
			while (v[i].size())v[i].pop_back();
			cnt[i] = 0;
		}
		for (int i:x){
			for (int j = lmx - 1;j >= 0;j --){
				if (i & (1 << j)){
					cnt[j] ++;
					v[j].push_back(i);
				}
			}
		}
		mx = -1;
		for (int i = lmx - 1;i >= 0;i --){
			if(cnt[i] >= m){
				mx = i;
				break;
			}
		}
//		cout << mx << " "; 
		lmx = mx;
		if (mx == -1) break;
		
	}
	int ans = (1 << 22) - 1;
	for (int i:x){
		ans &= i; 
	}
//	cout << x.size() << " ";
	cout << ans;
	return 0;
}
