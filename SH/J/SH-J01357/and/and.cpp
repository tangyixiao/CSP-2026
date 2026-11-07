#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ANS = 0,ANSTWO = 0;
vector<int> v;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	bool flag = 1;
	cin >> n >> m;
	for (int i=1;i<=n;i++)cin >> a[i];
	sort(a+1,a+n+1,greater<int>());
	for (int dig = 31;dig >= 0;dig--){
		v.clear();
		int cnt = 0;
		for (int i=1;i<=n;i++){
			if (((a[i] >> dig)&1) == 1){
				v.push_back(a[i]);
			}
		}
		if ((int)v.size() < m)continue;
		int ans = v[0];
		for (int i=1;i<m;i++){
			ans = (ans & v[i]);
		}
		ANS = max(ans,ANS);
		flag = 0;
	}
	
	for (int dig = 0;dig <= 31;dig++){
		v.clear();
		int cnt = 0;
		for (int i=1;i<=n;i++){
			if (((a[i] >> dig)&1) == 1){
				v.push_back(a[i]);
			}
		}
		if ((int)v.size() < m)continue;
		int ans = v[0];
		for (int i=1;i<m;i++){
			ans = (ans & v[i]);
		}
		ANSTWO = max(ans,ANSTWO);
		flag = 0;
	}
	if (flag)cout << 0;
	else cout << max(ANS,ANSTWO);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
