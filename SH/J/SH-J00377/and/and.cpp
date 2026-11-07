#include<bits/stdc++.h>

using namespace std;

int n, m;
bool a[200010][30];
int cnt[200010];
int ans[50], maxn = -1;
queue<int> s[50];

bool cmp(int y, int z){
	return y > z;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		int c;
		cin >> c;
		cnt[i] = 0;
		while(c != 0){
			cnt[i]++;
			a[i][cnt[i]] = (c % 2);
			c /= 2;
		}
		maxn = max(maxn, cnt[i]);
	}
	for(int i = maxn; i >= 1; i--){
		for(int j = 1; j <= n; ++j){
			ans[i] += a[j][i];
			if(a[j][i] == 1){
				s[i].push(j);
			}
		}
	}
	int ans2[200010];
	int cnt2 = 0;
	bool flag[50];
	memset(ans2, -1, sizeof(ans2));
	for(int i = maxn; i >= 1; i--){
		if(ans[i] < m){
			continue;
		}
		if(cnt2 == 0){
			flag[i] = true;
			while(!s[i].empty()){
				cnt2++;
				ans2[cnt2] = s[i].front();
				s[i].pop();
			}
		}
		else{
			int cnt4 = 0;
			queue<int> s2[50] = s;
			while(!s2[i].empty()){
				bool flag2 = false;
				for(int j = 1; j <= cnt2; ++j){
					if(ans2[j] == s2[i].front()){
						flag2 = true;
						break;
					}
				}
				if(flag2 == true){
					cnt4++;
				}
				s2[i].pop();
			}
			if(cnt4 >= m){
				flag[i] = true;
				int ans3[200010];
				memset(ans3, -1, sizeof(ans3));
				int cnt3 = 0;
				while(!s[i].empty()){
					bool flag2 = false;
					for(int j = 1; j <= cnt2; ++j){
						if(ans2[j] == s[i].front()){
							flag2 = true;
							break;
						}
					}
					if(flag2 == true){
						cnt3++;
						ans3[cnt3] = s[i].front();
					} 
					s[i].pop();
				}
				memset(ans2, -1, sizeof(ans2));
				cnt2 = cnt3;
				for(int j = 1; j <= cnt3; ++j){
					ans2[j] = ans3[j];
				}
			}
		}
	}
	long long ans_f = 0;
	for(int i = maxn; i >= 1; i--){
		ans_f *= 2;
		if(flag[i] == true){
			ans_f += 1;
		}
	}
	cout << ans_f;
	return 0;
}
